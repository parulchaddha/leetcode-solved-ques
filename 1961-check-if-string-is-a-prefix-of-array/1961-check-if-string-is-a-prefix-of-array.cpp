class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = words.size();
        string ans="";
        for(int i = 0 ; i <n;i++){
            ans=ans+words[i];
            if(ans==s)
                return true;
        }
        return false;
    }
};