class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight=-1,totalWeight=0;
        for(int weight : weights){
            maxWeight=max(maxWeight,weight);
            totalWeight=totalWeight+weight;

        }
        while(maxWeight<totalWeight){
            int midweight=maxWeight+(totalWeight-maxWeight)/2;
            int d=1,currweight=0;
            for(int weight: weights){
                if(currweight+weight > midweight){
                    d++;
                    currweight=0;
                }
                currweight+=weight;
            }
            if(d>days){
                maxWeight=midweight+1;
            }
            else{
                totalWeight=midweight;
            }
        }
        return maxWeight;
    }
};
