class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0] , maxProf = 0;
        for(int i = 1 ; i < prices.size() ; i++){
            if(minP > prices[i]){
                minP = min(minP, prices[i]);
            }
            else{
                maxProf = max(prices[i] - minP , maxProf);
            }
        }
        return maxProf;
        
    }
};
