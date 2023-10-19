class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string>s;
        int n=S.size();
        string str="";
        for(int i=0;i<n;i++){
            if(S[i]!='.'){
                str+=S[i];
            }
            else{
                s.push(str);
                s.push(".");
                str="";
            }
        }
        while(!s.empty()){
            str+=s.top();
            s.pop();
        }
        return str;
        
    } 
};
