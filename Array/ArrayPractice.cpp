#include <iostream>
using namespace std;


int main() {
    int marks[] =  {5, 15, 22, 1, -15, 24};
    int size =  sizeof(marks) / sizeof(int);
    int smallest = INT_MAX; 
    int largest = INT_MIN;
    for (int i =  0 ; i < size ; i++){
        smallest = min(marks[i], smallest); 
        largest = max(marks[i], largest); 

    }
    cout << "Largest : " << largest << endl;
    cout << "Smallest : " << smallest << endl;


    return 0;
}
