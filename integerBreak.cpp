/*class Solution {
public:
    int integerBreak(int n) {
        if(n<=3){
            return n-1;
        }
        int res=1;
        while(n>4){
            res*=3;
            n-=3;

        }
        res*=n;
        return res;
    }
};
*/
class Solution{
public:
    int integerBreak(int n){
        vector<int>dp(n+1,0);
        dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<i;j++){
                dp[i]=max(dp[i],max(j*(i-j),j*dp[i-j]));
            }
        }
        return dp[n];
    }
};
