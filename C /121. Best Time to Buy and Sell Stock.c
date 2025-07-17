int maxProfit(int* prices, int pricesSize) {
    int buy = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < buy) {
            buy = prices[i];
        }
        else {
            int profit = prices[i] - buy;  // selling
            maxProfit = (maxProfit > profit) ? maxProfit : profit;
        }

    }

    return maxProfit;
}
// CODE EXPLAINED ITSELF.
