class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while( columnNumber!=0){
             columnNumber--;
            int digit= columnNumber%26;
             columnNumber/=26;
            ans+='A'+digit;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};