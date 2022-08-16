class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int start =0,end=0,sum=0,ans=INT_MAX;
        while(end<nums.size()){
            sum+=nums[end++];
            while(sum>=target){
                ans=min(ans,end-start);
                sum-=nums[start++];
            }
        }
         return ans==INT_MAX?0:ans;
    }
};