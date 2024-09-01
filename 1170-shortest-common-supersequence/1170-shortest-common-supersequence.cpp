class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
         int ind1 = str1.length();
        int ind2 = str2.length();
        vector<vector<int>> dp(ind1+1,(vector<int>(ind2+1,0)));
   

     for(int i=1;i<=ind1;i++){
         for(int j=1;j<=ind2;j++){
             if(str1[i-1] == str2[j-1]) dp[i][j]= 1+dp[i-1][j-1];
             else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
         }
     }
int index = dp[ind1][ind2];
string ans ="";
while(ind1>0 && ind2>0){
if(str1[ind1-1]==str2[ind2-1]){
    ans = ans + str1[ind1-1];
    ind1--;
    ind2--;
}
else if(dp[ind1][ind2-1]>dp[ind1-1][ind2]){
    ans = ans + str2[ind2-1];
    ind2--;
}
else{
    ans = ans + str1[ind1-1];
    ind1--;
}
}
 while(ind1>0){
      ans += str1[ind1-1];
      ind1--;
  }
  while(ind2>0){
      ans += str2[ind2-1];
      ind2--;
  }
  reverse(ans.begin(),ans.end());
  return ans;
    }
};