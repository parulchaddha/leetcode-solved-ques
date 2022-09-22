class Solution {
public:
    string defangIPaddr(string address) {
        string h="";
        for(int i = 0 ; i <address.size();i++){
            if(address[i]=='.')
                h+="[.]";
            else
                h+=address[i];
        }
        return h;
    }
};