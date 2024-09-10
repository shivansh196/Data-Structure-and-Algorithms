class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(int it=0;it<s.size();it++){
              if(s[it]=='i'){
                reverse(ans.begin(),ans.end());
                continue;
              }
              ans= ans+s[it];
        }
        return ans;
    }
};