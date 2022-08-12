class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int mx=0;
    int m=nums1.size();
    int n=nums2.size();
    int i=m-1,j=n-1;
    if(m>n) i=n-1;
    while(i>=0 and j>=0){
       if(nums1[i]<=nums2[j]){
           if(i<=j) mx=max(mx,j-i);
           i--;
       }else{
           j--;
       }
    }
    return mx;
    }
};