class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(auto it : s){
            if(it=='#'){
                if(s1.empty()==1){
                    continue;
                }
                s1.pop();
            }
            else{
                s1.push(it);
            }

        }
        string res1="";
        while(!s1.empty()){
            res1.push_back(s1.top());
            s1.pop();
        }

        for(auto it : t){
            if(it=='#'){
                if(s2.empty()==1){
                    continue;
                }
                s2.pop();
            }
            else{
                s2.push(it);
            }
        }
        string res2="";
        while(!s2.empty()){
            res2.push_back(s2.top());
            s2.pop();
        }
        return res1==res2;

       
        
    }
};
