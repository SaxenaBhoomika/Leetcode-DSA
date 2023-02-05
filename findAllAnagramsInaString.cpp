class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=s.length();
        int n=p.length();
        if(m<n)
            return{};
        vector<int> freq_p(26,0);
        vector<int> win(26,0);
        
        for(int i=0;i<n;i++){
            freq_p[p[i]-'a']++;
            win[s[i]-'a']++;
        }
        vector<int> res;
        if(freq_p==win) 
            res.push_back(0);
        
        for(int i=n;i<m;i++){
             win[s[i-n] - 'a']--;
            win[s[i] - 'a']++;
            
            
        if(freq_p == win) res.push_back(i-n+1);
        }
        return res;
    }
};
