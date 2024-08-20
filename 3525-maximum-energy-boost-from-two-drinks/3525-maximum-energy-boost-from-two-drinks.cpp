class Solution {
public: 
    long long recurr(vector<int> &a, vector<int> &b, int i, int k, vector<vector<long long>> &dp){
        if(i==a.size()){
            return 0;
        }
        if(dp[k][i]!=-1){
            return dp[k][i];
        }
        long long take=0, nottake=0;
        if(k==1){
            take = a[i]+ recurr(a,b,i+1,k,dp);
            nottake = recurr(a,b,i+1,2,dp);
        }
        else if(k==2){
            take = b[i]+ recurr(a,b,i+1,k,dp);
            nottake = recurr(a,b,i+1,1,dp);
        }
        return dp[k][i]= max(take,nottake);
     }
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        vector<vector<long long>> dp(3,vector<long long>(energyDrinkA.size(),-1));
      return  max( recurr(energyDrinkA,energyDrinkB,0,1,dp),recurr(energyDrinkA,energyDrinkB,0,2,dp));
    }
};