// Problem Statement: Find the index of the max value which is stored in an Array:
#include <iostream>
using namespace std;

int main(){

    int marks[] = {5,10,-20,1000,25,-780, 1000};
    int sz  = sizeof(marks) / sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_idx = -1;
    int largest_idx = INT_MAX;
    for (int i = 0 ; i < sz;  i++){
        if(marks[i] < smallest){
            smallest = marks[i];
            smallest_idx = i;
        }
    }
    for (int i = 0 ; i < sz;  i++){
        if(marks[i] > largest){
            largest = marks[i];
            largest_idx = i;
        }
    }
    cout << "Smallest" << smallest <<endl;
    cout << "Largest" << largest <<endl;
    cout << "Smallest IDX : " << smallest_idx << endl;
    cout << "Largest IDX : " << largest_idx << endl;
    return 0 ;
}

