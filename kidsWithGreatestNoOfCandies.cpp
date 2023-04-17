class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum=0;
        vector<bool>res;
        for(int i=0;i<candies.size();i++){
            maximum=max(maximum,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maximum){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};
