class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int mx = 0;
    for(string s : sentences){
        int cnt = 0;
        for(char c : s)
            if(c == ' ')
                cnt++;
        mx = max(mx , cnt + 1);
    }
    return mx;
    }
};