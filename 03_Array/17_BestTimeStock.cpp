// 121. Best Time to Buy and Sell Stock
/*You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/

// SOLUTION

#include<bits/stdc++.h>
using namespace std;

// 1)BRUTE FORCE
  /*int maxProfit(vector<int>& prices) {
        
        int maxi = 0;

        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[i] <prices[j])
                    maxi = max(prices[j] - prices[i], maxi);
                
            }
        }
        return maxi;
    }*/

int maxProfit(vector<int>& prices){
    int mini = prices[0];
    int maxi = 0;

    for(int i=1; i<prices.size(); i++){
        maxi = max(prices[i] - mini, maxi);
        mini = min(prices[i], mini);
    }

    return maxi;
}

int main() {

    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;

}
