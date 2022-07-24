class Solution {
public:
    bool isPalindrome(int x) {
       unsigned int temp = x;
       unsigned int var = 0;

        while(temp){

            var = var*10 + temp%10;
            temp /= 10;

        }

        if(var == x){
            return 1;
        }
        return 0;
    }
};