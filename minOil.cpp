 C++ Solution
Simple C++ Solution
1.6K
VIEWS
6
Created at: 12 hours ago

Divyanshu_singh_cs
Divyanshu_singh_cs
 29
Intuition
Approach
Complexity
Time complexity:
Space complexity:
Code
class Solution {
public:
    vector<vector<int>> edges;
    vector<bool> visit;
    long long ret=0;
    int count(int cur,int k){
        int cnt=1;
        visit[cur]=true;
        for(auto i:edges[cur]){
            if(visit[i]==false){
                cnt+= count(i,k);
            }
        }
        if(cur!=0){
            ret+=((cnt+k-1)/k);

        }
        return cnt;
    }

    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n =roads.size();
        edges.resize(n+1);
        visit.resize(n+1);
        for(auto road:roads){
            edges[road[0]].push_back(road[1]);
            edges[road[1]].push_back(road[0]);
        }
        count(0,seats);
        return ret;
