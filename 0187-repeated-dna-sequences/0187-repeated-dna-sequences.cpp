class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> vec;
        unordered_map<string,int>mp;
        if(s.size()<10)
            return vec;
        for(int i =0;i <s.size()-9;i++){
            mp[s.substr(i,10)]++;
        }
        for(auto x : mp){
            if(x.second>1)
                vec.push_back(x.first);
        }
        return vec;
    }
}; 