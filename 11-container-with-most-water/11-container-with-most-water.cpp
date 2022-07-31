class Solution {
public:
    int maxArea(vector<int>& a) {
        int area= 0;
        int r= a.size()-1;
        int l= 0;
        while(l<r){
            area= max(area,min(a[l],a[r])*(r-l));
            if(a[l]<a[r]){
                l++;
            }else{
                r--;
            }
        }
        return area;
    }
};