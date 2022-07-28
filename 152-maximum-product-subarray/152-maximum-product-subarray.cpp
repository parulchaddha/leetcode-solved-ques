class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        // initialize max_product with max. of nums
        
        int max_product = *max_element(nums.begin(), nums.end());
        
        // curr_max will store the maximum product of subarray till (i - 1)th index
        
        int curr_max = 1;
        
        // curr_min will store the minimum product of subarray till (i - 1)th index
        
        int curr_min = 1;
        
        for(int i = 0; i < n; i++)
        {
            int temp_max = curr_max;
            
            // update the curr_max and curr_min
                
            curr_max = max({curr_max * nums[i], curr_min * nums[i], nums[i]});
                
            curr_min = min({temp_max * nums[i], curr_min * nums[i], nums[i]});
            
            // update max_product
                
            max_product = max(max_product, curr_max);
        }
        
        return max_product;
    }
};