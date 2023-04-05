class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long s=0,res=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            res=max(res,(s+i)/(i+1));
        }
        return res;
    }
};
