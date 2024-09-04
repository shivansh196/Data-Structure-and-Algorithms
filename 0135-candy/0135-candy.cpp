class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
       vector<int> ans(n,1);
          

          for(int i=1;i<n;i++){
                if(ratings[i-1]<ratings[i]){
                    ans[i]=1+ans[i-1];
                }
          }
          for(int i=n-2;i>=0;i--){
            if(ratings[i+1]<ratings[i]){
                ans[i]=max(ans[i],ans[i+1]+1);
            }
          }
          int submit=0;
          for(auto it:ans){
            submit+=it;
          }
          return submit;
    }
};