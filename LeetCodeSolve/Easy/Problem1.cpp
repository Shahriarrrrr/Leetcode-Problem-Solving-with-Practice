
//Brute-Force approach - Need to learn Hashtable to revisit this problem
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {3,3};
    int sz = nums.size();
    int target;
    cout << "Enter the target val: " << endl;
    cin >> target;
    int idx1 = 0;
    int idx2 = 0;
    int flag = 0;

    for (int i  = 0 ; i <= sz-1 ; i++ ){
        for(int j = 0; j <= sz-1; j++){
            if(i==j){
                break;
            }
            else{

                if(nums[i] + nums[j] == target){
                    idx1= j;
                    idx2 =i;
                    flag++;
                }
            }
        if (flag!=0){
                break;
            }  
        }
    if (flag!=0){break;}  
    
    }
    cout << "Index 1 :" <<idx1 <<endl;
    cout << "Index 2 :" <<idx2 << endl;
}

