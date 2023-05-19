class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colour(n,0);
        for(int i=0;i<n;i++){
            if(colour[i]!=0){
                continue;
            }
            queue<int>q;
            q.push(i);
            colour[i]=1;
            while(!q.empty()){
                int curr=q.front();
                q.pop();
                for(int edge:graph[curr]){
                    if(colour[edge]==0){
                        colour[edge]=-colour[curr];
                        q.push(edge);
                    }
                    else if(colour[edge]!=-colour[curr]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
