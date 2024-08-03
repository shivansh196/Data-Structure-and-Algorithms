class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       // map<int,list<int>> mp;
        map <int,int> freq;
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<edges[0].size();j++){
                
                   // mp[edges[i][0]] =   edges[0][j];
                    freq[edges[i][j]]++;
                   // mp[edges[0][j]] =   edges[i][0];
                
            }

        }
        int maxi=INT_MIN;
        int ans=-1;
        for(auto it: freq){
          maxi = max(maxi,it.second);
          if(maxi==it.second){
              ans = it.first;
          }
        }
        return ans;
    }
};