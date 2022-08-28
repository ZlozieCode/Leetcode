// q - https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool vis[V+1];
        for(int i=0;i<=V;i++){
            vis[i]=0;
        }
        
        vector<int>ans;
        
        queue<int>q;
        q.push(0);
        vis[0]=1;
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            
            for(int x:adj[temp]){
                if(vis[x]==0){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
        
        return ans;
    }
};
