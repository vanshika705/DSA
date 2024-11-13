#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int maxProfit = 0, bestBuy = prices[0];

    for (int i =1 ; i < prices.size() ; i++){
        if( prices[i] > bestBuy){
            maxProfit = max( maxProfit , prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy , prices[i]);
    }
    return maxProfit;
}

int main(){

    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);

    cout << "vector is : " ;
    for(int val:prices){
        cout<< val << " ";
    }
    cout << endl;

    cout<< "Maximum profit is : " << maxProfit(prices);
    return 0;
}