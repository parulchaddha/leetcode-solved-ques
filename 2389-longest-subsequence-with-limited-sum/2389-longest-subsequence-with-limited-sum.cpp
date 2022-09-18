class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> vec;
        int n = nums.size(),m=queries.size();
        for(int i = 0 ; i <m;i++){
            int sum=0,size=0,target=queries[i];
            for(int j=0;j<n && sum<=target;j++){
                if(nums[j]+sum<=target){
                    size++;
                    sum=sum+nums[j];
                }
            }
            if(sum<=target){
                vec.push_back(size);
            }
        }
        return vec;
    }
};