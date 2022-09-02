class Solution {
public:
    int digit(int x){
        int res=0;
        while(x!=0){
            int p=x%10;
            res=res+p*p;
            x/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        int i=10;
        while(i--){
            int r=digit(n);
            if(r==1){
                return true;
            }
            n=r;
           // i--;
        }
        return false;
    }
};