class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
       int totaltime=0,currtime=0;
        for(int i = 0 ; i <colors.size();i++){
            if(i>0 && colors[i]!=colors[i-1]){
                currtime=0;
            }
            totaltime+=min(currtime,neededTime[i]);
            currtime=max(currtime,neededTime[i]);
        }
        return totaltime;
    }
};