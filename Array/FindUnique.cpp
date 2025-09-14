#include <iostream>
using namespace std;

void findUnique(int num[], int sz){

    for(int i = 0 ; i < sz ; i++){
        int temp = num[i];
        int flag = 0;
        for (int j = 0 ; j < sz; j++){

            if(temp == num[j]){
                flag+=1;
            }

        }
        if (flag < 2){
            cout << "Unique: " << temp << endl;
        }
    }
}


int main(){
    int num[] = {1,2,3,4,5,5,1,2,3};
    int sz = sizeof(num) / sizeof(int);
    findUnique(num, sz);
}