#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr = {0,1,2,3,4,5};
    int n = 6;
    for(int start = 0; start < n-1 ; start++){
        for(int end = start; end < n; end++){
            for(int i=start; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}