class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=0;
        int j=grid[0].size()-1;
        int cnt=0;
        while(i<grid.size() && j>=0){
            if(grid[i][j]<0){
                cnt+=(grid.size()-i);
                j--;
            }
            else if(grid[i][j]>=0){
                i++;
            }
        }
        return cnt;
    }
};
