class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string s2="";
        int i =0;
        while(s[i]!='\0'){
            if(s[i]>='a' && s[i]<='z')
                s1+=s[i];
            else if (!s1.empty())
                s1.pop_back();
            ++i;
        }
        i=0;
         while(t[i]!='\0'){
            if(t[i]>='a' && t[i]<='z')
                s2+=t[i];
            else if (!s2.empty())
                s2.pop_back();
            ++i;
        }
        if(s1==s2)
            return true;
        return false;
    }
};