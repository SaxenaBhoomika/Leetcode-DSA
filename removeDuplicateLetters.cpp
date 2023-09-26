class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>freq(26,0),vis(26,0);
        for(auto ch : s){
            freq[ch-'a']++;
        }
        string res;
        int n=s.length();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']--;
            if(!vis[s[i]-'a']){
                while(res.size() && res.back()> s[i] && freq[res.back()-'a']>0){
                    vis[res.back()-'a']=0;
                    res.pop_back();
                }
                res.push_back(s[i]);
                vis[s[i]-'a']=1;
            }
        }
        return res;
    }
};
