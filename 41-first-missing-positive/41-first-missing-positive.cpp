class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k =1;
        unordered_map<int,int> mp;
        for(int i = 0 ; i <nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i = 0 ; i <nums.size();i++){
            if(mp[k])
                k++;
            else if (!mp[k])
                return k;
        }
        return k;
    }
}; 