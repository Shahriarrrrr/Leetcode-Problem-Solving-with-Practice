#include <iostream>
using namespace std;

void findCommon(int num1[], int num2[], int sz1, int sz2){
    for(int i = 0 ; i < sz1 ; i++){
        int flag = 0;
        for(int j = 0; j < sz2; j++){
            if(num1[i] == num2[j]){
                flag++;
            }
        }
        if(flag >= 1){
            cout << "Common elements :" << num1[i] << endl;
        }
    }
}


int main(){
    int num1[] = {0,1,2,3,4,5,7};
    int num2[] = {1,2,3,4,6,7};

    int sz1 = sizeof(num1) / sizeof(int);
    int sz2 = sizeof(num2) / sizeof(int);

    findCommon(num1,num2,sz1,sz2);
}