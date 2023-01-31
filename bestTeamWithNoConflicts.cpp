class Solution {
public:
     int fun(int idx,int last,int n,vector<pair<int,int>>& vec,vector<vector<int>>& dp){
        if(idx==n+1){
            return 0;
        }
        if(dp[idx][last]!=-1) return dp[idx][last];
        int pick=0,notpick=0;
        if(vec[idx].second>=vec[last].second){
            pick=vec[idx].second+fun(idx+1,idx,n,vec,dp);
        }
        notpick=fun(idx+1,last,n,vec,dp);
        return dp[idx][last]=max(pick,notpick);
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=scores.size();
        vector<pair<int,int>> vec;
        vec.push_back({0,0});
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<n;i++){
            vec.push_back({ages[i],scores[i]});
        }
        sort(vec.begin(),vec.end());
        
        return fun(1,0,n,vec,dp);
    }
};
