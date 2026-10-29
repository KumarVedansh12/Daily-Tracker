class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // int buyprice=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
            // profit=max(profit,prices[i]-buyprice);
        }
        return profit;
    }
};