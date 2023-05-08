class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int psum=0,ssum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    psum+=mat[i][j];
                }
                else if(i+j==n-1){
                    ssum+=mat[i][j];
                }
            }
        }
        return psum+ssum;
    }
};
