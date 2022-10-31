class Solution {
public:
    long double fact(int n ){
        if (n<2)
            return 1;
        return n * fact(n-1);
    }
    vector<int> getRow(int i) {
        vector<int> ans;
        for(int j =0;j<=i;j++){
            double temp=(fact(i)/(fact(j)*fact(i-j)));
            ans.push_back(temp);
        }
        return ans;
    }
};
