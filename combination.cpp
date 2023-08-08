class Solution {
    void backtrack(int n,int k,int start, vector<vector<int>>&res,vector<int>&comb){
        if(comb.size()==k){
            res.push_back(comb);
            return;
        }
        for(int i=start;i<=n;i++){
            comb.push_back(i);
            backtrack(n,k,i+1,res,comb);
            comb.pop_back();
        }
}
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>comb;
        backtrack(n,k,1,res,comb);
        return res;

    }
};
