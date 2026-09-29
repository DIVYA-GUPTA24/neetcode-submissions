class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int mn=INT_MAX;

        for(int i=0;i<prices.size();i++)
        {
            // mn=min(mn,nums[i]);
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]>prices[i])
                {
                int diff=prices[j]-prices[i];
                mx=max(mx,diff);
                }
                
            }
        }
        return mx;
    }
};
