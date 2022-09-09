class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        string ans="High Card";
        sort(ranks.begin(),ranks.end());
        sort(suits.begin(),suits.end());
        int i=0;
        if(suits[i]==suits[i+4]){
            ans="Flush";
        }
        for(int i = 0;i<ranks.size();i++){
            if(ranks[i]==ranks[i+2] && ranks[i]==ranks[i+1]){
                ans="Three of a Kind";
                break;
            }
            else if(ranks[i]==ranks[i+1]){
                ans="Pair";
            }
        }
        return ans;
    }
};