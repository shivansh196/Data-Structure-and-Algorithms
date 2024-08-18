class Solution {
public:
    void dfs(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> &path, int start, int end) {
        path.push_back(start);
        if (start == end) {
            ans.push_back(path);
        } else {
            for (auto it : graph[start]) {
                dfs(graph, ans, path, it, end);
            }
        }
        path.pop_back(); // This should always be called to backtrack
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        int nodes = graph.size();
        if (nodes == 0) {
            return ans;
        }

        dfs(graph, ans, path, 0, nodes - 1);
        return ans;
    }
};
