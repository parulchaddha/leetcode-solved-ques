class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
      for(int i =n-1;i>=2;i--){
            int lo=0,high=i-1;
          while(lo<high){
              if(nums[lo]+nums[high]>nums[i]){
                  ans+=high-lo;
                  high--;
              }
              else
                  lo++;
          }
      }
        return ans;
    }
};