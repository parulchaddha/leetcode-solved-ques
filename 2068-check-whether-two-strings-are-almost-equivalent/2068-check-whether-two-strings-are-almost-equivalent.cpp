class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<word1.length();i++){
            a[word1[i]-'a']++;
        }
        for(int i=0;i<word2.length();i++){
            b[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(abs(a[i]-b[i])>3)
                return false;
        }
        return true;
    }
};