class Solution {
    private:
    int func(vector<int>& piles,int k)
    {
        int th=0;
        for(int &pile:piles)
        {
            th+=ceil((double)pile/(double)k);
        }
        return th;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;

        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int total=func(piles,mid);
            if(total<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
        return ans;

        
    }
};
