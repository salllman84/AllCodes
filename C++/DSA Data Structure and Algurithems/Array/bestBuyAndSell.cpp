#include<iostream>
#include<vector>
#include<climits>
#include<climits>
using namespace std;

int BestProfit(vector<int> stock){
    int MaxProfit = 0, BestBuy= stock[0];
    for(int i=1; i< stock.size(); i++){
        if(stock[i]>BestBuy){
        MaxProfit = max(MaxProfit, stock[i]-BestBuy);
        }
        BestBuy = min(BestBuy, stock[i]);
    }
    return MaxProfit;
}

int main(){
    vector<int>Stocks={4,3,7,8,3,1,9};

    int MaxProfit = BestProfit(Stocks);
    cout<<"max profit : "<<MaxProfit;
    // buy on 1
    // sell on 9
    // maxprofit = 8

    return 0;
}