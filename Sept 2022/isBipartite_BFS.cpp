class Solution {
public:
    bool check(vector<vector<int>>& graph, int node,  vector<int> &color){
        queue<int> q;
        q.push(node);
        color[node]=1;
        while(!q.empty()){
            int nd = q.front();
            q.pop();
            for(auto i : graph[nd]){
                if(color[i]==-1){
                    q.push(i);
                    color[i]=1-color[nd];
                }
                else if(color[i]==color[nd]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!check(graph,i,color)){
                    return false;
                }
            }
        }
        return true;
    }
};