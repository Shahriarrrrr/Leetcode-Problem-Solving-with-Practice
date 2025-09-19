#include <iostream>
#include <vector>
using namespace std;


//BruteForce approach
int main() {
    vector<int> nums = {3,2,2,2,2};
    int sz = nums.size();

    for (int items : nums) {
        int frequency = 0;
        for (int element : nums) {
            if (items == element) {
                frequency++;
            }
        }
        if (frequency > sz / 2) {
            cout << "Number: " << items << " has max appearance of " << frequency << " times\n";
            break;
        }
    }

    return 0;
}
