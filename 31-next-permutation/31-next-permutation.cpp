class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int i = nums.size()-1;
        if(nums.size()==1) 
        return;
        while(i>0 && nums[i] <= nums[i-1]) 
        i--;
        if(i != 0){
            for(int j=nums.size()-1;j>=i;j--){
                if(nums[j]>nums[i-1]){
                    swap(nums[j],nums[i-1]);
                    break;
                } 
            }    
        }
        int j = nums.size()-1;
        while(i<j)
        swap(nums[i],nums[j]),i++,j--;
    }
};