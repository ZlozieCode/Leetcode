// q -> https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    vector<int>ans;
    void dfs(int V, vector<int> adj[],bool vis[],int s){
        
        ans.push_back(s);
        vis[s]=1;
        
        for(int x:adj[s]){
            if(vis[x]==0){
                vis[x]=1;
                dfs(V,adj,vis,x);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        bool vis[V];
        for(int i=0;i<=V;i++){
            vis[i]=0;
        }
        
        dfs(V,adj,vis,0);
        return ans;
    }
};
