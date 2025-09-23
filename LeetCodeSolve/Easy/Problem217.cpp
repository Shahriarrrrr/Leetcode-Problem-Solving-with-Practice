#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//(OnLogn)
int containsDuplicate(vector <int> &nums){
    sort(nums.begin(), nums.end());
    int sz = nums.size();
    int sum = 0;
    int XORsum = 0;
    for (int i = 0; i < sz; i++){
        int XORsum = nums[i] ^ nums[i+1];
        if(XORsum == 0){
            return true;
        }
    }
    return false;
}




int main(){
    vector <int> nums = {1,2,3,4,5,6,7};

    cout << containsDuplicate(nums);
}