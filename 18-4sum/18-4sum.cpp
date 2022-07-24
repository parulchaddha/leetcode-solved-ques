class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
              vector<vector<int>> result;
    // Final Result
    set<vector<int>> SortedStorage;
    // Set for storing unique quadruplets
    sort(nums.begin(), nums.end());
    // Sorting the nums in ascending order
    int n = nums.size();
    long TwoSum = 0;
    // Target - Sum of any 2 elements in nums using 2 pointer concept
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            //Here we are using 2 adjacent pointers moving from
            //l to r
            TwoSum = (long)target - nums[i] - nums[j];
            // Two Sum will be now bifurcated into 2 unique elements if
            // present in the nums
            int k = j + 1;
            int l = n - 1;
            // Again we will use 2 pointer
            // One pointer(k) will move from l to r
            // Other pointer(l) will move from r to l
            while (k < l)
            {
                int sum = nums[k] + nums[l];
                // Finding sum according to k and l and we will change k and l
                // according to the comparison between TwoSum and Sum
                if (TwoSum > sum)
                    k++;
                else if (TwoSum < sum)
                    l--;
                else
                {
                    SortedStorage.insert({nums[i],
                                          nums[j],
                                          nums[k],
                                          nums[l]});
                    // If sum==TwoSum then we will store the quad in a set in the
                    // correct order
                    k++;
                    l--;
                    // Finding other unique combinations
                }
            }
        }
    }
    for (auto i : SortedStorage)
    {
        result.push_back(i);
    }
    return result;
    }
};