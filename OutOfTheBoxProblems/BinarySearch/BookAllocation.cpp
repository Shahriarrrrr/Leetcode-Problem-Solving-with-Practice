/*
-----------------------------------------------
    📘 Book Allocation Problem
-----------------------------------------------

You are given an array `arr[]` where each element represents 
the number of pages in a book. There are `n` books and `m` students.

Each student must be assigned a **contiguous sequence** of books.
Your task is to allocate the books in such a way that the
**maximum number of pages assigned to a student is minimized**.

-----------------------------------------------
Example:
-----------------------------------------------
Input:
    arr = [12, 34, 67, 90]
    m = 2

Output:
    113

Explanation:
    Allocation 1 → [12, 34, 67] and [90]
    Maximum pages = 113
    This is the minimum possible maximum.

-----------------------------------------------
Constraints:
-----------------------------------------------
1 <= n <= 10^5
1 <= arr[i] <= 10^9
1 <= m <= n
-----------------------------------------------
*/


#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector <int> arr, int  maxAllowedPages, int n, int m){
    int st = 1;
    int pages = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        } 
        if(pages + arr[i] <= maxAllowedPages){
            pages+=arr[i];
        } else{
            st++;
            pages = arr[i];
        }
    }
    return st > m ? false : true;
}


int allocatebooks(vector <int> &arr , int n , int m){
    if(m > n){
        return -1;
    }
    int sum = 0;
    for(int item : arr){
        sum+=item;
    }
    int ans = - 1;
    int start = 0;
    int end = sum;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isValid(arr, mid , n, m)){
            ans = mid;
            end = mid - 1;
        } else{
            start = mid + 1;
        }
    }
    return ans;
}



int main(){
    vector <int> arr = {7,2,5,10,8};
    int n  = 5 ;
    int m = 2;

    cout << allocatebooks(arr, n, m) << endl;
}
