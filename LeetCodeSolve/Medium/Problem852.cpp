#include <iostream>
#include <vector>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1 ;

    while(start < end){
        int mid = start + (end - start) / 2 ;
        if(arr[mid+1] > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        
    }
    return start;
    

}



int main(){
    vector <int> arr = {3,5,3,2,0};
    cout << peakIndexInMountainArray(arr) << endl;
}
// int peakIndexInMountainArray(vector<int>& arr) {
//     int start = 0;
//     int end = arr.size() - 1 ;
//     int idx = 0;
//     int i = 0;
//     while(start <= end){
//         int mid = start + (end - start) / 2 ;
//         if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid+1] ){
//             return mid;
//         }
//         else if(arr[mid-1] < arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }

//     }
//     return -1;
// }



// int main(){
//     vector <int> arr = {3,5,3,2,0};
//     cout << peakIndexInMountainArray(arr) << endl;
// }