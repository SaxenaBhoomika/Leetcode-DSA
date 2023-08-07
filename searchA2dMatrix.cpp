class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0,col=n-1;
        while(row<m && col>-1){
            int current=matrix[row][col];
            if(current==target){
                return true;
            }
            else if(target>current){
                row++;
            }
            else{
                col--;
            }
           
        }
       return false;
    }
};
