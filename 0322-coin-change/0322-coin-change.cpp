class Solution {
public:
int recurr(vector<int>& coins, int amount, int i, vector<vector<int>> &dp){
     if(i==0){
        if(amount%coins[i]==0){
            return amount/coins[i];
        }
        else{
            return 1e9;
        }
     }
     if(dp[i][amount]!=-1){
        return dp[i][amount];
     }

     int nottake = 0+ recurr(coins,amount,(i-1),dp);
     int take =1e9 ;
     if((amount)>=coins[i]){
        take = 1+ recurr(coins,(amount-coins[i]),i,dp);
     }
     return dp[i][amount]= min(take,nottake);

}
    int coinChange(vector<int>& coins, int amount) {
        int i=coins.size()-1;
        vector<vector<int>> dp(i+1,vector<int>(amount+1,-1));
        int ans =  recurr(coins,amount,i,dp);
        if(ans >= 1e9){
            return -1;
        }
        return ans;
    }
};