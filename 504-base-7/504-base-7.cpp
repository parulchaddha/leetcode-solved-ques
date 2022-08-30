class Solution {
public:
    string convertToBase7(int num) {
    int n = abs(num);
    
    string ans = "";
    
    if(num==0)
    {
        ans = "0";
        return ans;
    }
    
    while(n>0)
    {
        ans = to_string(n%7) + ans;
        n = n/7;
    }
    
    if(num<0)
        ans = "-" + ans;
    
    return ans;
    }
};