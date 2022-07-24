class Solution {
public:
    double myPow(double x, int n) {
  double res=1;
    //Converting n into various splits like if n=13 then n= 1 + 4 + 8, if n=10 then n = 2 + 8
        while(n){
            if(abs(n%2)){ 
                res=(n>0)?res*x:res/x;
            }
            x = x*x;
            n = n/2;
        }
        return res;
    }
};