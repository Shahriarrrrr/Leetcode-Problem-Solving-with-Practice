#include <iostream>
using namespace std;


int linearSearch(int target , int arr[] , int sz){
    cout << "Linear Search Start : " << endl;
    int idx = 0;
    for(int i = 0; i < sz ; i++){
        if(target == arr[i]){
            idx = i;
            return idx;
        }
    }
    return -1;

}



int main(){
    int num[] = {100,200,80,120,8,88,91};
    int sz = sizeof(num) / sizeof(int);
    int target;
    cin >> target ; 
    cout << linearSearch(target, num , sz);
    
}

//38.59