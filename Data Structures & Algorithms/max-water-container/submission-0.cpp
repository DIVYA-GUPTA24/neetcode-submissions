class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mx=0;

        while(left<right)
        {
           int area=0;
           int diff=right-left;

           if(nums[left]<=nums[right])
           {
             area=diff*nums[left];
             left++;
           }
           else
           {
            area=diff*nums[right];
            right--;
           }

           mx=max(mx,area);
        }
        return mx;
    }
};
