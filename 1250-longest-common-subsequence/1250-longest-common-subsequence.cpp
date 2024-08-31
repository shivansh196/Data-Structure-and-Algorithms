class Solution {
public:
int recurr(string text1, string text2, int i, int j, vector<vector<int>> &dp){
    if(i<0 || j<0){
        return 0;
    }
    if(i==0 && j==0){
        if(text1[0]==text2[0]){
            return 1;
        }
        else return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }


    int take =0;
    int nottake=0;
    if(text1[i]==text2[j]){
        take = 1+recurr(text1,text2,i-1,j-1,dp);
    }
    nottake = max(recurr(text1,text2,i-1,j,dp),recurr(text1,text2,i,j-1,dp));

    return dp[i][j]= max(take,nottake);
}
    int longestCommonSubsequence(string text1, string text2) {
        // int i= text1.size()-1;
        // int j= text2.size()-1;

        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,0));
        for(int i=1;i<=text1.size();i++){
            for(int j=1;j<=text2.size();j++){
                if(text1[i-1]==text2[j-1]) dp[i][j]= 1+ dp[i-1][j-1];

                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
      // return recurr(text1,text2,i,j,dp);
      return dp[text1.size()][text2.size()];
    }
};