#include <iostream>
#include <vector>

using namespace std;

//Two Pointer Approach
int maxArea(vector <int> &height){
    int n = height.size();
    int i = 0;
    int j = n-1;
    int maxWater= 0;

    while(i < j){
        cout << "i :" << i << endl;
        cout << "j :" << j << endl;

        int width = j - i;
        int currentHeight = min(height[i], height[j]);
        int currentArea = currentHeight * width;
        if(height[i] < height[j]){
            i++;
        }
        else {
            j--;
        }
        if (currentArea > maxWater){
            maxWater = currentArea;
        }
        cout << "Width : " << width << endl; 
        cout << "currentHeight : " << currentHeight << endl; 
        cout << "currentArea : " << currentArea << endl; 
    }
    return maxWater;


    // for(i = 0; i < n; i++){
    //     int width = j - i;
    //     int currentHeight = min(height[i], height[j]);
    //     int currentArea = currentHeight * width;
    //     if(height[i] < height[j]){
    //         j++;
    //     }
    //     else{
    //         i++;
    //     }
    //     if (currentArea > maxWater){
    //         maxWater = currentArea;
    //     }
        
    // }
    // return maxWater;
}





//Brute Force Approach -> Time Complexity (worst case - > TLE)
// int maxArea(vector <int> &height){
//     int i = 0;
//     int n = height.size();
//     int maxarea = INT_MIN;

//     for(i = 0; i < n; i++){
//         for(int j = 0; j < n ; j++){
//             int width = j - i;
//             int maxHeight = min(height[i], height[j]);
//             cout << "Width : " << width << endl;
//             cout << "Height : " << maxHeight << endl;
//             int currenTArea = maxHeight * width;
//             if(currenTArea > maxarea){
//                 maxarea = currenTArea;
//             }
//         }
//     }
//     return maxarea;
// }



int main(){
    vector <int> height = {1,1};
    cout << maxArea(height);

}