class Solution {
public:
    string removeOuterParentheses(string s) {
          stack<char> st;
          string res="";
          int n = s.size();
        for(char e:s){
            if(e=='('){
                st.push(e);
                if(st.size()>1)
                    res+=e;
            }
            else if(e==')')
                if(st.size()==1)
                    st.pop();
                else{
                    res+=e;
                    st.pop();
                }
        }
        return res;
    }
};