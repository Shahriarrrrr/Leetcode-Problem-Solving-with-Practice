#include <iostream>
#include <vector>

using namespace std;

int main(){
    //One Way to declare
    vector <int> vec = {1,2,3};
    cout << vec[0]<<endl;

    //Another way to declare

    vector <int> vec2 (5,0); // 5 is size and 0 is value for each index 
    cout << vec2[1] << endl; //0 - 5 is zero

    //For Each Loop
    vector <char> vec3 = {'a','b', 'c', 'd', 'e'};

    
    for (char item : vec3){
        cout << item << endl;
    }
    
    //Vector Functions: size(),push_back(),pop_back(),front(),back(),at

    //Size
    cout << "Size of vector no. 3  is : " << vec3.size() << endl;

    //Push Back

    vector <int> vec4;
    cout <<"The size of vec4 is " << vec4.size()<< endl;
    vec4.push_back(25);
    cout <<"The size of vec4 after push back is " << vec4.size() << endl;
    vec4.push_back(30);
    cout <<"The size of vec4 after 2nd push back is " << vec4.size() << endl;

    for (int item : vec4){
        cout << item << endl;
    }

    // pop_back()
    vec4.pop_back();
    
        for (int item : vec4){
            cout << "After pop back " << item << endl;
        }
    //front() , back()    
    vector <int> vec5;
    vec5.push_back(99);   
    vec5.push_back(105);  
    vec5.push_back(169);
    
    cout << "front : " << vec5.front() << endl;
    cout << "back : " << vec5.back() << endl;

    //at()

    cout << "At : " << vec5.at(0) << endl;

    return 0;
}