#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector <int> nums = {2,0,2,1,1,0,1,2,0,0};
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n -1 ;

    while (mid <= high){
        if(nums[mid]  == 0){
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        } else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[high], nums[mid] );
            high--;
        }
    }
    for(int items : nums){
        cout << items << ", ";
    }
}