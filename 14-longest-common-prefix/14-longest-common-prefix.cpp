class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
        string result="";
        int size=strs.size();
        for(int i =0;i<strs[0].length();i++){
            if(strs[0][i]==strs[size-1][i])
                result+=strs[0][i];
            else
                break;
        }
        return result;
    }
};