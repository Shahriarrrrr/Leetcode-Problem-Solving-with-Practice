#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;








//Moores Voting Algorithm:


int maxFinder(vector <int> &nums){
    int n = nums.size();
    int frequency = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(frequency == 0){
            ans = nums[i];
        }
        if(nums[i] == ans){
            frequency++;
        }
        else{
            frequency --;
        }
    }
    return ans;
}


int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    
    int n = nums.size();

    int maxFrequency = maxFinder(nums);
    cout << "Max Frequency : " << maxFrequency;



    return 0;
}




//Faster Than Brute force (Onlogn + n)
// int maxFInder(vector <int> &nums, int n)
// {
//     int sz = nums.size();
//     for(int items: nums){
//         cout << items << endl;
//     }
//     int prev = nums[0];
//     int frequency = 0;
//     for(int item : nums){
//         if(item == prev){
//             frequency++;
//         }
//         else{
//             if(frequency > n/2){
//                 return prev;
//             }
//             prev = item;
//             frequency = 1;
//         }
        
//     }
//     return (frequency > n/2) ? prev : -1;
// }

//BruteForce approach optimization
// int main() {
//     vector<int> nums = {3,2,3};
    
//     int n = nums.size();

//     int maxFrequency = maxFInder(nums, n);
//     cout << "Max Frequency : " << maxFrequency;



//     return 0;
// }
//BruteForce approach
// int main() {
//     vector<int> nums = {3,2,2,2,2};
//     int sz = nums.size();

//     for (int items : nums) {
//         int frequency = 0;
//         for (int element : nums) {
//             if (items == element) {
//                 frequency++;
//             }
//         }
//         if (frequency > sz / 2) {
//             cout << "Number: " << items << " has max appearance of " << frequency << " times\n";
//             break;
//         }
//     }

//     return 0;
// }
