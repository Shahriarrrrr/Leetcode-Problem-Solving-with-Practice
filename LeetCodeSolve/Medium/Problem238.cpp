#include <iostream>
#include <vector>
using namespace std;


//O(n)
vector <int> ProductCalculate(vector <int> &nums){
    int n = nums.size();
    vector <int> prefix(n,1); 
    vector <int> suffix(n,1); 
    vector <int> ans(n,1);
    for(int i = 1; i < n ; i++){
        prefix[i] = nums[i-1] * prefix[i-1];
    }
    
    for(int j = n-2; j >= 0 ; j--){
        suffix[j] = nums[j+1] * suffix[j+1];
        
    }
    for(int i = 0; i < n ; i++){
        ans[i] = prefix[i] * suffix[i];
    }



    return ans;
}
//BruteForce
// vector <int> ProductCalculate(vector <int> &nums){
//     int n = nums.size();
//     vector <int> ans;
//     for(int i = 0; i < n ; i++){
//         int product = 1;
//         for(int j = 0; j < n ; j++){
//             if(i != j){
//                 product = nums[j] * product;
//             }
//         }
//         ans.push_back(product);
//     }
//     return ans;
// }


int main(){
    vector <int> nums = {1,2,3,4};
    vector <int> result =  ProductCalculate(nums);
    for (int item : result){
        cout << item << endl; 
    }
}
