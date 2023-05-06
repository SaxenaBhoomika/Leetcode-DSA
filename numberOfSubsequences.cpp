class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
       int n=nums.size();
       int l=0,r=n-1,cnt=0,mod=1e9+7;
       sort(nums.begin(),nums.end());
       vector<int>p(n);
       p[0]=1;
       for(int i=1;i<n;i++){
           p[i]=p[i-1]*2%mod;

       }
       while(l<=r){
           if(nums[l]+nums[r]>target){
               r--;
           }
           else{
               cnt=(cnt+p[r-l++])%mod;
           }
       }
       return cnt;
    }
};
