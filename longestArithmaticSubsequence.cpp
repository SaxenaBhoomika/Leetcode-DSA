class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>mp;
        int mx=0;

        for(int i=0;i<arr.size();i++){
            int idx=arr[i];
            if(mp.find(idx-difference)!=mp.end()){
                mp[idx]=mp[idx-difference]+1;

            }
            else{
                mp[idx]=1;
            }
            mx=max(mx,mp[idx]);


        }
        return mx;
    }
};
