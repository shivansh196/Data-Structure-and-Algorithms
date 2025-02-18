class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> que;

        for(auto it:points){
            int temp = it[0]*it[0] + it[1]*it[1];
            que.push({temp,it});
            if(que.size()>k) que.pop();
        }
        vector<vector<int>> ans;
        while(!que.empty()){
            ans.push_back(que.top().second);
            que.pop();
        }
        return ans;
    }
};