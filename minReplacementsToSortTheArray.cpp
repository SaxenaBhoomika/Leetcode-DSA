class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
        int last=nums[n-1];
        long long res=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>last){
                int temp=nums[i]/last;
                if(nums[i]%last){
                    temp++;
                }
                last=nums[i]/temp;
                res+=temp-1;
            }
            else{
                last=nums[i];
            }
        }
        return res;
    }
};
