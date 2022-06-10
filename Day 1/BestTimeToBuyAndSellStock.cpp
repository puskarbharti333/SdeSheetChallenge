int maximumProfit(vector<int> &prices){

    int minBuy= prices[0]; // for lowest buy of stocks
    int maxProfit = 0; // max profit that can be made
    
    for(int i = 0; i < prices.size(); i++){
        minBuy = min(minBuy,prices[i]); // check which is lower current price or previous bought price

        // check for previous profit and [curret price - bought price] which is max 
        maxProfit = max(maxProfit, prices[i] - minBuy); 
    }
    return maxProfit;
}