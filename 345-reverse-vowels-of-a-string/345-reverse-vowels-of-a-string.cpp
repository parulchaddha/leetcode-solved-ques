class Solution {
public:
   bool check(char ch){
    if(ch =='a' or ch =='e' or ch =='o' or ch =='i' or ch =='u' or ch =='A' or ch =='E' or ch =='I' or              ch =='O' or ch =='U'  )
        return 1;
    return 0;
}

string reverseVowels(string s) {
    
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(check(s[i]) && check(s[j]))
         swap(s[i++],s[j--]);           
        else if(!check(s[i]))
            i++;
        else
            j--;
    }
       return s;    
    }
};