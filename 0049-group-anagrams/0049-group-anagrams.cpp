class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string,vector<string>> mp;
        for(int i =0;i <strs.size();i++){
            string a=strs[i];
            sort(a.begin(),a.end());
            mp[a].push_back(strs[i]);
        }
        for(auto &it:mp)
             vec.push_back(it.second);
        return vec;
        }
};