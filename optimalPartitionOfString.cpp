class Solution {
public:
    int partitionString(string s) {
       int i=0,cnt=0;
       unordered_map<char,bool>mp;
       while(i<s.length()){
           if(mp.find(s[i])!=mp.end()){
               cnt++;
               mp.clear();
           }
           mp[s[i]]=true;
           i++;
       }
       return cnt+1;
    }
};
