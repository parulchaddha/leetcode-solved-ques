class Solution {
public:
    #define ll long long int
    bool judgeSquareSum(int c) {
        ll l = 0;
        ll r = sqrt(c);
        while(l<=r)
        {
            ll value = (l*l) + (r*r);
            if(value == c)
            {
                return true;
            }
            else if(value > c)
            {
                r--;
            }
            else if(value < c)
            {
                l++;
            }
        }
        return false;
    }
};