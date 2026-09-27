class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pp(nums.size(),1);
        vector<int>sp(nums.size(),1);
        vector<int>ans(nums.size(),1);
        
        for(int i=1;i<nums.size();i++)
        {
           pp[i]=nums[i-1]*pp[i-1];
        }

        for(int i=nums.size()-2;i>=0;i--)
        {
            sp[i]=nums[i+1]*sp[i+1];
        }

        for(int i=0;i<nums.size();i++)
        {
            ans[i]=pp[i]*sp[i];
        }
        return ans;
    }
};
