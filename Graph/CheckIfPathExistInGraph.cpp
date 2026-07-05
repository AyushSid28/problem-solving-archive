class Solution {
    public:
        bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    
            vector<vector<int> >adj(n);
            for(auto &e:edges){
                int u=e[0];
                int v=e[1];
                adj[u].push_back(v);
                adj[v].push_back(u);
    
            }
            adj.push
            vector<int>visited(n,false);
            queue<int> q;
            visited[source]=true;
            q.push(source);
    
            while(!q.empty()){
                int node=q.front(); q.pop();
                if(node==destination) return true;
                for(auto& neighbor:adj[node]){
                    if(!visited[neighbor]){
                        visited[neighbor]=true;
                        q.push(neighbor);
                    }
                }
    
            }
            return false;
        }
    };