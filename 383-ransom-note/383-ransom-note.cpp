class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    vector <int> freq(27, 0);
    for (int i=0; i<magazine.size(); i++) // TC -> O(M+N).. SC -> O(M)
    {
        ++freq[magazine[i] - 'a'];
    }
    
    for (char x: ransomNote)
    {
        if (freq[x-'a'] == 0)
        {
            return false;
        }
        else{
            freq[x - 'a']--;
        }
    }
    return true;
    }
};