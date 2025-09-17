#include <iostream>
#include <vector>
using namespace std;

//DP


int main(){
    vector <int> prices = {2,4,1};
    int sz = prices.size();
    int max_profit = 0;
    int current_buy = prices[0];


    for(int i= 1; i < sz; i++){
        if(prices[i] > current_buy){
            max_profit = max(max_profit, prices[i] - current_buy);
        }

        current_buy = min(current_buy, prices[i]);
    }
    cout << "Max Profit" << max_profit;
}





// My thinking: 

// int main(){
//     vector <int> prices = {1};
//     int sz = prices.size();
//     int current_price = INT_MAX;
//     int max_profit = INT_MIN;
//     int current_profit = 0;


//     for(int i= 0; i < sz; i++){

//         if(prices[i] < current_price){
//             current_price = prices[i];
//             if(max_profit < current_price){
//                 max_profit = 0;
//             }
//         }
//             current_profit = prices[i] - current_price;
//             max_profit = max(max_profit,current_profit);//2

//     }
//     cout << "Max Profit" << max_profit;
// }












//BruteForce Approach: 
// int main(){
//     vector <int> prices = {7,2,5,3,6,4,10,1,25,100};
//     int sz = prices.size();
//     int max_profit = INT_MIN;
//     int current_profit = 0;

//     for(int buy_day = 0; buy_day < sz; buy_day++){
//         for(int sell_day = buy_day+1; sell_day<sz; sell_day++){
//             if(prices[buy_day] < prices[sell_day]){
//                 current_profit = prices[sell_day] - prices[buy_day];
//                 max_profit = max(max_profit, current_profit);
//             }
//         }
//     }
//     cout << "Max Profit" << max_profit;
// }