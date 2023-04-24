class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n == 1) return stones[0];
        sort(stones.begin(), stones.end());
        int i = n-1;
        while(i >= 1){
            if(stones[i-1] == stones[i])
                i = i - 2;
            else{
                stones[i-1] = stones[i] - stones[i-1];
                i = i -1;
                int j = i;
                while( j > 0 and stones[j-1] > stones[j] ){
                    swap( stones[j-1] , stones[j] );
                    j--;
                }
            }
        }
        if( i == 0 )
            return stones[i];
        else 
            return 0;
    }
};
