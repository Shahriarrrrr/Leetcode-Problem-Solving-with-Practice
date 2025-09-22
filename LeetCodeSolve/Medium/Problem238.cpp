#include <iostream>
#include <vector>
using namespace std;



//BruteForce
vector <int> ProductCalculate(vector <int> &nums){
    int n = nums.size();
    vector <int> ans;
    for(int i = 0; i < n ; i++){
        int product = 1;
        for(int j = 0; j < n ; j++){
            if(i != j){
                product = nums[j] * product;
            }
        }
        ans.push_back(product);
    }
    return ans;
}


int main(){
    vector <int> nums = {-1,1,0,-3,3};
    vector <int> result =  ProductCalculate(nums);
    for (int item : result){
        cout << item << endl; 
    }
}