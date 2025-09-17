#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {3,-4,5,4,-1,7,-8};
    int sz = nums.size();
    cout << sz;
    int max_sum = INT_MIN;
    int current_sum = 0;
    for(int start = 0; start < sz-1; start++){
        current_sum += nums[start];
        max_sum =  max(max_sum, current_sum);
        if(current_sum < 0){
            current_sum = 0;
        }

    }
    cout << "Max Sum : " << max_sum; 
}