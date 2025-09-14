//Polished Solution ->Time complexity ->  O(n)
#include <iostream>
using namespace std;

void reverseArray(int number[],int size){
    int first_idx = 0;
    int last_idx = size - 1;
    while(first_idx < last_idx){
        swap(number[first_idx], number[last_idx]);
        first_idx++;
        last_idx--;
    }
}



int main(){
    int number[] = {4,2,7,8,1,2,5,10};
    int sz = sizeof(number) / sizeof(int);
    reverseArray(number, sz);
    for(int i = 0; i< sz; i++){
        cout << number[i] << " " ;
    }
}






//Manual Solution: 
// #include <iostream>
// using namespace std;






// int main(){
//     int number[] = {4,2,7,8,1,2,5};
//     int sz = sizeof(number) / sizeof(int);
//     int left_IDX;
//     int right_IDX  = sz-1;

//     for(left_IDX= 0  ; left_IDX < right_IDX ; left_IDX++ ){
//         int tmp1 = number[left_IDX];
//         int tmp2 = number[right_IDX];
//         number[right_IDX] = tmp1;
//         number[left_IDX] = tmp2;
//         right_IDX--;
//         cout << tmp1 <<endl;
//         cout<< tmp2 <<endl;
//     }

//     for(int i = 0 ; i < sz ; i++){
//         cout << number[i] << " ";
//     }
//     return 0 ;
// }