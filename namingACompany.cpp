class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_map<string,int>m;
        for(auto i : ideas){
            m[i]++;
        }
        vector<vector<int>>dp(26,vector<int>(26,0));
        for(int i=0;i<ideas.size();i++){
            string curr=ideas[i];
            char ch1=curr[0];
            for(int j=0;j<26;j++){
                char ch2=j+'a';
                curr[0]=ch2;
                if(m.find(curr)==m.end()){
                    dp[ch1-'a'][j]++;
                }
            }
        }
        long long res=0;
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                res+=dp[i][j]*dp[j][i];
                
            }
        }
        return res;
    }
};
