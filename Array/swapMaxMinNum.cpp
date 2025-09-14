#include <iostream>
using namespace std;


void swapMaxandMin(int num[], int sz){
    int max_value = INT_MIN;
    int low_value = INT_MAX;
    int max_val_IDX = -1;
    int low_val_IDX = -1;

    for(int i = 0; i < sz ; i++){
        if(num[i] < low_value){
            low_value = num[i];
            low_val_IDX = i;
        }
        if(num[i] > max_value){
            max_value = num[i];
            max_val_IDX = i;
        }
    }
    return swap(num[low_val_IDX], num[max_val_IDX]);
}



int main(){
    int num[] = {1000,200,3,4,500,1};
    int sz = sizeof(num)/sizeof(int);
    swapMaxandMin(num, sz);
    for (int i = 0 ; i < sz ; i++){
        cout << num[i] << " ";
    }
}