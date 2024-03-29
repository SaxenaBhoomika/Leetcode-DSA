class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jumps=0,farthest=0,current=0;
        for(int i=0;i<n-1;i++){
            farthest=max(farthest,nums[i]+i);
            if(i==current){
                current=farthest;
                jumps++;
            }
        }
        return jumps;
    }
};
