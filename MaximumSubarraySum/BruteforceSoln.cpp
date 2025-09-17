#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n = 5;
    int arr[n] = {-1,2,3,4,-5};
    int final_sum = INT_MIN;
    for(int start = 0; start < n; start++){
        int current_sum = 0;
        for(int end = start; end < n; end++){
            current_sum+=arr[end];
            if(final_sum < current_sum){
                final_sum = current_sum;
            }
            //cout << " ";
        }
        //cout << endl;
    }
    cout << "Final_sum: " << final_sum;
}