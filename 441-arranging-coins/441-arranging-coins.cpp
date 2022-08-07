class Solution {
public:
    int arrangeCoins(int n) {
       int k=0;
        while(n>0){
            k++;
            n-=k;
        }
        return n==0?k:k-1;
    }
};