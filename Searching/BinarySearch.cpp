#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> &nums, int target, int start, int end){
    if (start >= end) return -1;
    int mid = start + (end - start) / 2;
    if(target == nums[mid]){
        return mid;
    }
    else if(target < nums[mid]){
        return binarySearch(nums, target, start, mid-1);
    }
    else{
        return binarySearch(nums, target, mid+1, end);
    }
    return -1;
}



int main(){
vector <int> nums = {-1,0,3,4,5,9,12,13};
    int end = nums.size();
    int start = 0;
    int target = 13;  
    cout << binarySearch(nums, target, start,  end);
}