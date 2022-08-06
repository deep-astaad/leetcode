class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int l=0,r=1;
        for (r = 1; r < prices.size(); ++r)
        {
            if (prices[l] > prices[r] && r != prices.size()-1)
            {
                l =r ;
            }
            else
            {
                int diff = prices[r] - prices[l];
                maxP = max(diff,maxP);
            }
        }
        return maxP;
    }
};