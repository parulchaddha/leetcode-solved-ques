class Solution {
public:
    int lengthOfLastWord(string s) {
         int n= s.size();
        if(n==1){
            return 1;
        }
        int count= 0;
        for(int i= n-1; i>=1; i--){
            if(s[i]!=' '){
                count++;
                if(s[i-1]==' '){
                    return count;
                }
            }
        }
        return count+1;
    }
};