class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>>temp_grp;
        vector<vector<int>>res;
        for(int i=0;i<groupSizes.size();i++){
            int size=groupSizes[i];
            temp_grp[size].push_back(i);
            
            if(temp_grp[size].size() == size) {
                res.push_back(temp_grp[size]);
                temp_grp[size].clear();
            }
        }
        return res;
        

    }
};
