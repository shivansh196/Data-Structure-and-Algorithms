class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> v=(intervals[0]);
       // int n = intervals[0];
        for(auto it:intervals){
            if(it[0]<=v[1]){
                v[1]=max(v[1],it[1]);
            }
            else{
                ans.push_back(v);
                v=it;
            }
        }
        ans.push_back(v);
        return ans;
    }
};