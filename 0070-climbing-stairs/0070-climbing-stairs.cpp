class Solution {
public:
int recurr(int n, vector<int> &dp){
    if(n== 0 || n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]= recurr(n-1, dp)+ recurr(n-2,dp);
}
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
       return recurr(n, dp);
    }
};