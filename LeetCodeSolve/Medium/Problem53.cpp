#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {1};
    int sz = nums.size();
    int max_sum = INT_MIN;
    int current_sum = 0;
    for(int i = 0 ; i < sz; i++){
        current_sum+= nums[i];
        max_sum = max(max_sum , current_sum);
        if(current_sum < 0){
            current_sum=  0;
        }
    }
    cout << "MaxSum:" << max_sum;
}