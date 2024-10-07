class Solution {
public:
int recurr(int i,vector<int> &dp){
    if(i<0){
        return 0;
    }
    if(i==0){
        return 1;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    return dp[i] = recurr(i-1,dp) + recurr(i-2,dp);
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
       return  recurr(n,dp);
    }
};