class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size()/3;
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            int val=it.first;
            int cnt=it.second;
            if(cnt>n){
                res.push_back(val);
            }
        }
        return res;


       
    }
};
