#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {4,1,2,1,2};
    //cout << nums.size() << endl;

    int value = 0;
    for (int items: nums){
        
        value = value ^ items;
        //cout << value << endl;
    }
    cout << value;


}