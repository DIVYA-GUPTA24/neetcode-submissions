class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ml=0;
        for(int i=0;i<nums.size();i++)
        {
            int l=0;
            int x=nums[i];
            if(mp.find(x-1)==mp.end())
            {
                while(mp.find(x)!=mp.end())
                {
                    l++;
                    ml=max(ml,l);
                    x=x+1;
                }
            }
        }
        return ml;
    }
};
