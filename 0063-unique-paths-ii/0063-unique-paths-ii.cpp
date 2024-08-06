class Solution {
public:
int recurr(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>>& dp){
    if(i==0 && j==0 && obstacleGrid[i][j]!=1){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
      if(obstacleGrid[i][j]==1){
        return 0;
      }
      if(dp[i][j]!=-1){
        return dp[i][j];
      }

   
       int  up = obstacleGrid[i][j] + recurr(obstacleGrid,i-1,j,dp);
       int  left = obstacleGrid[i][j]+ recurr(obstacleGrid,i,j-1,dp);
    
    return dp[i][j]=(up+left);
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i=obstacleGrid.size();
        int j=obstacleGrid[0].size();
        vector<vector<int>> dp(i+1,vector<int>(j+1,-1));
        return recurr(obstacleGrid,i-1,j-1,dp);
    }
};