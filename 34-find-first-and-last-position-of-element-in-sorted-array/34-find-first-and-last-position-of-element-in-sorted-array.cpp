class Solution {
public:
    
    int firstOcc(vector<int>&nums , int k){
    int s = 0;
    int e = nums.size()-1;
    int mid = s+(e-s)/2;
    int res = -1;
    while(s<=e){
        if(nums[mid]==k){
            res = mid;
            e = mid-1;
        }
        else if(nums[mid]>k){
            e = mid-1;
        }
        else{
             s= mid+1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return res;
}

int lastOcc(vector<int>&nums , int k){
    int s = 0;
    int e =nums.size()-1;
    int mid = s+(e-s)/2;
    int res = -1;
    
    while(s<=e){
        if(nums[mid]==k){
            res = mid;
            s=mid+1;
        }
        else if(nums[mid]>k){
            e = mid-1;
        }
        else{
             s= mid+1;
        }
        mid = s+(e-s)/2;
    }
    
    return res;
}
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    
    ans.push_back(firstOcc(nums,target));
    ans.push_back(lastOcc(nums,target));
    return ans;
}
};