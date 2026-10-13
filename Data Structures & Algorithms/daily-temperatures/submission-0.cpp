class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        vector<int>ans(temperatures.size(),0);

        for(int i=0;i<temperatures.size();i++)
        {
            while(!st.empty() && st.top().first<temperatures[i])
            {
               int stIdx=st.top().second;
               st.pop();
               ans[stIdx]=i-stIdx;

            }
            st.push({temperatures[i],i});
        }
        return ans;
    }
};
