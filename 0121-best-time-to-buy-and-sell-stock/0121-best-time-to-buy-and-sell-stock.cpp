class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int p = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(mini > prices[i])
            {
                mini = min(mini,prices[i]);
                maxi = mini;
            }
            if(maxi<prices[i])
            {
                maxi = max(maxi,prices[i]);
            }
            p = max(p,maxi-mini);
        }
        return p;
    }
};