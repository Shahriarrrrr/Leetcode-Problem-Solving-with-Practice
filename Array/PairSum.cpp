#include <iostream>
#include <vector>
using namespace std;


vector <int> PairSum(vector <int> &nums, int sz, int target){
    vector <int> ans;
    int i = 0;
    int j = sz-1;
    while (i < j) {
        if (nums[i] + nums[j] > target) {
        j--;} else if (nums[i] + nums[j] < target) {
            i++;
        } else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;}
    }
    return ans;
}


int main(){
    vector <int> nums = {2,7,11,15};
    int sz = nums.size();
    int target = 17;
    vector <int> ans = PairSum(nums, sz, target);

    cout << ans[0] <<" " << ans[1] << endl;
    

}
