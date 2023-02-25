class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
    int minR = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        minR = min(minR, prices[i]);
        maxP = max(maxP, prices[i] - minR);
    }
    return maxP;
    }
};
