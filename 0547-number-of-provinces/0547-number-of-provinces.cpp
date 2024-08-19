class Solution {
public:
void dfs(int node,vector<int> adj[],vector<int> &visit){
    visit[node]=1;
    for(auto it: adj[node]){
        if(!visit[it]){
            dfs(it,adj,visit);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> adj [isConnected.size()];
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int> visit(isConnected.size(),0);
        int count=0;
        for(int i=0;i<isConnected.size();i++){
            if(!visit[i]){
                count++;
                dfs(i,adj,visit);
            }
        }
        return count;
    }
};