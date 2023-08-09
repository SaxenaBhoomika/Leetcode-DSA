class Solution {
    int check(int mid,vector<int>&nums,int p,int n){
        int in=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(in){
                in=0;
                continue;
            }
            if(nums[i]-nums[i-1]<=mid){
                in=1;
                cnt++;
            }
        }
        return cnt>=p;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        int low=0,high=nums[n-1]-nums[0];
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(mid,nums,p,n)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;

            }
        }
        return ans;
    }
};
