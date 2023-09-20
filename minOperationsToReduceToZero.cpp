class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target=0,n=nums.size();
        for(int num: nums){
            target+=num;
        }
        target-=x;
        if(target==0){
            return n;
        }
        int max_len=0,curr_sum=0,left=0;
        for(int r=0;r<n;r++){
            curr_sum+=nums[r];
            while(left<=r && curr_sum>target){
                curr_sum-=nums[left];
                left++;
            }
            if(curr_sum==target){
                max_len=max(max_len,r-left+1);
            }
        }
        return max_len?n-max_len:-1;
    }
};
