class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long decodeL=0;
        for(auto charac : s){
            if(isdigit(charac)){
                decodeL*=charac-'0';
            }
            else{
                decodeL++;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(isdigit(s[i])){
                decodeL/=(s[i]-'0');
                k=k%decodeL;
            }
            else{
                if(k==0 || decodeL==k){
                    return string("")+s[i];
                }
                decodeL--;
            }
        }
        return "";

    }
};
