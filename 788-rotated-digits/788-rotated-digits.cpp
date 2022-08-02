class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
         for(int i=1;i<=n;i++)
         {
             bool flag=false;
             int temp=i;
             while(temp!=0)
             {
                 int d=temp%10;
                 if(d==3 || d==7 || d==4)
                 {
                     flag=false;
                     break;
                 }
                 
                 if(d==2 || d==5 || d==6 || d==9)
                 {
                     flag=true;
                 }
                 temp=temp/10;
             }
             if(flag)
             {
                 count++;
             }
         }
        return count;
    }
};