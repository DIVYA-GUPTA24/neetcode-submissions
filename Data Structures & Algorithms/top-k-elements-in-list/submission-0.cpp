class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int>ans;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(auto it:mp)
        {
        buckets[it.second].push_back(it.first);
        }
        int c=0;
        for(int i=buckets.size()-1;i>=1;i--)
        {
            
            for(int x:buckets[i])
            {
               ans.push_back(x);
               c++;
               if(c==k)
            {
                return ans;
            }
            }
            
            
        }
        return ans;


    }
};
