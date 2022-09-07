class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
          long sum = 0;
        for(int x: chalk)
            sum += x;
        k %= sum;
        for(int i = 0; i < chalk.size(); i++)
            if((k-=chalk[i]) < 0)
                return i;
        return 0;
    }
};  