class Solution {
    public:
        void dfs(vector<vector<int>>& graph, int node, int target, 
             vector<int>& path, vector<vector<int>>& result) {
        path.push_back(node);
        
        if (node == target) {
            result.push_back(path);
        } else {
            for (int neighbor : graph[node]) {
                dfs(graph, neighbor, target, path, result);
            }
        }
        
        path.pop_back();  // backtrack
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(graph, 0, graph.size() - 1, path, result);
        return result;
    }
    };