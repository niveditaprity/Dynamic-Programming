class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
      int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%k)
        {
            return false;
        }
        
        int target=sum/k;
        bool t[n+1][target+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<target+1;j++)
            {
                if(i==0)
                {
                    t[i][j]=false;
                }
                if(j==0)
                {
                    t[i][j]=true;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<target+1;j++)
            {
                if(nums[i-1]<=j)
                {
                  t[i][j]=t[i-1][j]||t[i-1][j-nums[i-1]];  
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][target];
    }
};
