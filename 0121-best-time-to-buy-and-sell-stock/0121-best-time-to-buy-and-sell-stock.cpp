class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(maxi<prices[i])
            {
                maxi = prices[i];
            }
            if(mini>prices[i])
            {
                mini = prices[i];
                maxi = mini;
            }
            profit = max(profit,maxi-mini);
        }
        return profit;
    }
};