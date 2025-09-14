#include <iostream>
using namespace std;

int main(){
    int number[] = {4,2,7,8,1,2,5};
    int sz = sizeof(number) / sizeof(int);
    int left_IDX;
    int right_IDX  = sz-1;

    for(left_IDX= 0  ; left_IDX < right_IDX ; left_IDX++ ){
        int tmp1 = number[left_IDX];
        int tmp2 = number[right_IDX];
        number[right_IDX] = tmp1;
        number[left_IDX] = tmp2;
        right_IDX--;
        cout << tmp1 <<endl;
        cout<< tmp2 <<endl;
    }

    for(int i = 0 ; i < sz ; i++){
        cout << number[i] << " ";
    }
    return 0 ;
}