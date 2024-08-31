class Solution {
public:
    int recurr(int amount, vector<int>& coins,int i, vector<vector<int>> &dp){
        if(i<0){
            return 0;
        }
         if(i==0){
            return (amount%coins[0]==0);
         }
         if(dp[amount][i]!=-1){
            return dp[amount][i];
         }
        int take =0;
        if(coins[i]<=amount)
        take  = recurr(amount-coins[i],coins,i,dp);

        int nottake = recurr(amount,coins,i-1,dp);

        return dp[amount][i]= take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int i = coins.size()-1;
        vector<vector<int>> dp(amount+1,vector<int>(i+2,-1));
        return recurr(amount,coins,i,dp);
    }
};