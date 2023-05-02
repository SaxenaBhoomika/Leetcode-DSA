class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int s=1;
        for(int num:nums){
            if(num==0){
                return 0;
            }
            else if(num<0){
                s=-s;
            }
        }
        return s;
        
        
    }
};
