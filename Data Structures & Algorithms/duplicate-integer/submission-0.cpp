class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(int num:nums)
        {
        s.insert(num);
        }
        if(nums.size()==s.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};