class Solution {
public:
    bool check(vector<vector<int>>& graph, int node,  vector<int> &color){
        
        if(color[node]==-1){
            color[node]=1;
        }
        
       for(auto i : graph[node]){
           if(color[i]==-1){
               color[i]=1-color[node];
               if(!check(graph,i,color)){
                   return false;
               }
           }
           else if(color[i]==color[node]){
               return false;
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