class Solution {
public:
    string makeGood(string s) {
        string ans="";
        stack<char> ss;
        for(char ch:s){
        if(!ss.empty() && abs(ch-ss.top())==32)
            ss.pop();
        else
            ss.push(ch);
        }
        while(!ss.empty()){
            ans=ss.top()+ans;
            ss.pop();
        }
        return ans;
    }
};