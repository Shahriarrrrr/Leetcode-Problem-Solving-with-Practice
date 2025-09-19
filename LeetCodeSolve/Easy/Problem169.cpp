#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//Faster Than Brute force (Onlogn + n)
int maxFInder(vector <int> &nums, int n)
{
    int sz = nums.size();
    for(int items: nums){
        cout << items << endl;
    }
    int prev = nums[0];
    int frequency = 0;
    for(int item : nums){
        if(item == prev){
            frequency++;
        }
        else{
            if(frequency > n/2){
                return prev;
            }
            prev = item;
            frequency = 1;
        }
        
    }
    return (frequency > n/2) ? prev : -1;
}

//BruteForce approach optimization
int main() {
    vector<int> nums = {3,2,3};
    
    int n = nums.size();

    int maxFrequency = maxFInder(nums, n);
    cout << "Max Frequency : " << maxFrequency;



    return 0;
}
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
