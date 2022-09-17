class Solution {
public:
    int trailingZeroes(int n) {
        int t=n;
        int d5=0,d2=0;
        while(t>0)
        {
            d5+=t/5;
            t/=5;
        }
        t=n;
        while(t>0)
        {
            d2+=t/2;
            t/=2;
        }
        return min(d2,d5);
    }
};