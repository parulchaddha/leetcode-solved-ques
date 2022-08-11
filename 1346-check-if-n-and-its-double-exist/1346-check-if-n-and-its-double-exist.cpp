class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end(),greater());
        unordered_set<int> s; 
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(s.find(2*arr[i])!=s.end() || s.find(arr[i]/2)!=s.end() && arr[i]%2==0)
                return true;
            s.insert(arr[i]);
        }
        return false;
    }
};