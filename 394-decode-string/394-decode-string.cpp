class Solution {
public:
    string decodeString(string s) {
        stack<char> stk;

        for(char &c: s)
        {
            if(c != ']')
                stk.push(c);
            else
            {
                string x = "";
                string counter = "";
                while(stk.top() != '[')
                {
                    x += stk.top();
                    stk.pop();
                }
                
                stk.pop();

                while(stk.size() && isdigit(stk.top()))
                {
                    counter += stk.top();
                    stk.pop();
                }

                reverse(x.begin(), x.end());
                reverse(counter.begin(), counter.end());
                int t = stoi(counter);
                for(int i = 0; i < t; ++i)
                {
                    for(char &c: x)
                        stk.push(c);
                }
            }
        }

        string out = "";
        while(stk.size())
        {
            out += stk.top();
            stk.pop();
        }

        reverse(out.begin(), out.end());
        return out;
    }
};