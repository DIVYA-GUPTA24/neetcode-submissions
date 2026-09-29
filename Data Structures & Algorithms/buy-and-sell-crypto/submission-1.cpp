class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int left=0;
        int right=1;
        int mx=0;

        while(right<nums.size())
        {
            if(nums[right]>nums[left])
            {
                mx=max(mx,nums[right]-nums[left]);
            }
            else
            {
                left=right;
            }
            right++;
        }
        return mx;
    }
};
