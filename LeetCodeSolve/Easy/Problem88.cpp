#include <iostream>
#include <vector>

using namespace std;

void merge(vector <int>& nums1, int m, vector <int>& nums2, int n){
        int idx = m+n -1;
        int j = n-1;
        int i = m-1;

        while(i >= 0 && j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1.at(idx) = nums1[i];
                i--;
                idx--;
            }
            else{
                nums1.at(idx) = nums2[j];
                j--;
                idx--;
            }
        }
            while(j >= 0){
                nums1[idx--] = nums2[j--];
            }


    }


int main(){
    vector <int> nums1 = {1,2,3,0,0,0};
    vector <int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;

    merge(nums1,m, nums2,n);
    for(int items : nums1){
        cout << items << " ";
    }

}