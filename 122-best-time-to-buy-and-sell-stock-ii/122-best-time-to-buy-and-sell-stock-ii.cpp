class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n = prices.size();
        int money=prices[0];
        for(int i =0;i<n;i++){
            if(prices[i]>money){
                profit+=prices[i]-money;
                money=prices[i];
            }
            else
                money=prices[i];
        }
        return profit;
    }
};