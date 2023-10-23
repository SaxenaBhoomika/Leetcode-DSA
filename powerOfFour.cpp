class Solution {
public:
    bool isPerfect(int n){
        int x=sqrt(n);
        return (x*x==n);
    }
    bool isPowerOfFour(int n) {
       if(n<=0){
           return false;
        }
        else if(n==1){
            return true;
        }
        else if(!isPerfect(n)){
            return false;
        }
        return !(n & (n-1));


    }
};
