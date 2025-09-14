//Problem statement -> Sum & Product of all numbers in an Array

#include <iostream>
using namespace std;

int sum(int number[], int sz){
    int sum = 0;
    for(int i = 0; i<sz ; i++){
        sum+=number[i];
    }
    return sum;
}

int product(int number[], int sz){
    int total = 1;
    for(int i = 0; i < sz ; i++){
        total = total * number[i];

    }
    return total;
}



int main(){
    int number[] = {1,2,3,4};
    int sz = sizeof(number)/ sizeof(int);
    //cout << sum(number, sz);
    cout << product(number, sz);
}