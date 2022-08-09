class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> stk;
        int c =0,ind=0;
        for(int i = 1;i<=n;i++){
            if(c==target.size())
                break;
            if(target[ind]!=i){
                stk.push_back("Push");
                stk.push_back("Pop");
            }
            else{
                stk.push_back("Push");
                c++;
                ind++;
            }
        }
        return stk;
    }
};