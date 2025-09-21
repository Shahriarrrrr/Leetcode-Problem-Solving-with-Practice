#include <iostream>
#include <vector>

using namespace std;



//Brute Force Approach
int maxArea(vector <int> &height){
    int i = 0;
    int n = height.size();
    int maxarea = INT_MIN;

    for(i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            int width = j - i;
            int maxHeight = min(height[i], height[j]);
            cout << "Width : " << width << endl;
            cout << "Height : " << maxHeight << endl;
            int currenTArea = maxHeight * width;
            if(currenTArea > maxarea){
                maxarea = currenTArea;
            }
        }
    }
    return maxarea;
}



int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
     
    cout << maxArea(height);

}