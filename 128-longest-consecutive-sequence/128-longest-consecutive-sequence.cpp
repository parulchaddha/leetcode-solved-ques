class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
 
        int mx=1,res=1;
        int n=nums.size();
        if(n==0)
          return 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
            {   mx++;
            res=max(res,mx);
             }
            else if(nums[i]!=nums[i-1])
                mx=1;
        }
        return res;
    }
};