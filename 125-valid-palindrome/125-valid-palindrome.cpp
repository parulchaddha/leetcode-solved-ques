class Solution {
    

public:
    bool isPalindrome(string s) {
        string res = "";
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                res += s[i] - ('A' - 'a');
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                res += s[i];
            }
        }

        for (int i = 0; i < res.size()/2; ++i) {
            if (res[i] != res[res.size() - i - 1]) {
                return false;
            }
        }
        
        return true;
    }
};