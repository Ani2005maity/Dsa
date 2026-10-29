class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int curr_price = prices[0];
        for(int i = 0; i < n; i++){
            int curr_prof = prices[i] - curr_price;
            profit = max(profit, curr_prof);
            curr_price = min(prices[i], curr_price);
        }
        return profit;
    }
};