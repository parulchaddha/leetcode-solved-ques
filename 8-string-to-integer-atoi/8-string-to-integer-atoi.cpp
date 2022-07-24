class Solution {
public:
    int myAtoi(string s) {
    int n=s.size();
    string s1="";
    int i=0;
    
        while(i<n){
            if(!s1.empty() && s[i]==' ') break;
            if(s[i]!=' ') s1.push_back(s[i]);
            i++;
        }
        if(s1=="") return 0;
        stringstream ss(s1);
        int ans;
        ss>>ans;
       return ans;
}
   
};