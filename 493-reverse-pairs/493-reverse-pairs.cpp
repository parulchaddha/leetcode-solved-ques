class Solution {
public:
     int merge(vector<int> &nums, int left, int mid, int right){
        int i = left, j = mid+1, cnt_rev = 0;
        while(i <= mid){                                          // Logic Here
            while(j <= right && nums[i] > (long long)2*nums[j]){
                j++;
            }
            cnt_rev += (j-mid-1);
            i++;
        }
        i = left;
        j = mid+1;
        vector<int> temp;
        while(i <= mid && j <= right){
            if(nums[i] < nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }
        while(i <= mid)
            temp.push_back(nums[i++]);
        while(j <= right)
            temp.push_back(nums[j++]);
        for(int i=left; i<=right; i++)
            nums[i] = temp[i-left];
        return cnt_rev;
    }
    int merge_sort(vector<int> &nums, int left, int right){
        int rev = 0;
        if(left < right){
            int mid = (left+right)/2;
            rev = merge_sort(nums,left,mid);
            rev += merge_sort(nums,mid+1,right);
            rev += merge(nums,left,mid,right);
        }
        return rev;
    }
    int reversePairs(vector<int>& nums) {
        int mrg = merge_sort(nums,0,nums.size()-1);
        return mrg;
    }
};