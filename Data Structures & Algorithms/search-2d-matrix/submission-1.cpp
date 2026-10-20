class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { 
        int m=matrix.size();
        int n=matrix[0].size();

        int low=0;
        int high=m-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(matrix[mid][0]<=target && target<=matrix[mid][n-1])
            {
                int left=0;
                int right=n-1;

                while(left<=right)
                {
                    int mcol=left+(right-left)/2;

                    if(matrix[mid][mcol]==target)
                    {
                        return true;
                    }
                    else if(matrix[mid][mcol]<target)
                    {
                        left=mcol+1;
                    }
                    else
                    {
                        right=mcol-1;
                    }
                }
                return false;
            }
            else if(matrix[mid][0]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
        return false;

    }
};
