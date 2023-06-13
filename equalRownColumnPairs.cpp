class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        int res=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            mp[grid[i]]++;
        }
        for(int j=0;j<c;j++){
            vector<int>temp;
            for(int i=0;i<r;i++){
                temp.emplace_back(grid[i][j]);
            }
            res+=mp[temp];
        }
        return res;
    }
};
