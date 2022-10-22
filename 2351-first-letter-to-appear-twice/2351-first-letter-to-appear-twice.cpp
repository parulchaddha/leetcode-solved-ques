class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> m;
        
        for(int i = 0; i < s.length();i++){
            if(m[s[i]] == 1){
                //ek baar counting ho chuki h
                return s[i];
            }else{
                //for counting
                m[s[i]]++;
            }
        }
        return 'a';
    }
};