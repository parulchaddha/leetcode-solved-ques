class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //running a while to find &  erase all the elements with it's value as val
        while(find(nums.begin(),nums.end(),val)!=nums.end()){
            nums.erase(find(nums.begin(),nums.end(),val));
        }
        return nums.size();
    }
};