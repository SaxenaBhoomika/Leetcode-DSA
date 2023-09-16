class Solution {
private:
    bool visited[105][105];
    int xdir[4]={0,1,-1,0};
    int ydir[4]={1,0,0,-1};
    int nR,nC;
public:
    void dfs(int x,int y,int limitEffort,vector<vector<int>>&heights){
        if(visited[x][y]){
            return ;
        }
        visited[x][y]=true;
        if(x==nR-1 && y==nC-1){
            return ;
        }
        for(int i=0;i<4;i++){
            int new_x=x+xdir[i];
            int new_y=y+ydir[i];
            if(new_x<0 || new_x>=nR || new_y<0 || new_y>=nC){
                continue;
            }
            int newEffort=abs(heights[x][y]-heights[new_x][new_y]);
            if(newEffort<=limitEffort){
                dfs(new_x,new_y,limitEffort,heights);
            }
        }
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        nR=heights.size();
        nC=heights[0].size();
        int lowerL=0,upperL=1e6;
        while(lowerL<upperL){
            int mid=(upperL+lowerL)/2;
            memset(visited,0,sizeof visited);
            dfs(0,0,mid,heights);

            if(visited[nR-1][nC-1]){
                upperL=mid;
            }
            else{
                lowerL=mid+1;
            }
        }
        return lowerL;
    }
};
