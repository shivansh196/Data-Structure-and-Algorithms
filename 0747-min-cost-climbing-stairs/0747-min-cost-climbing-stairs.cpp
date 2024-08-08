class Solution {
public:
int recurr(vector<int>& cost,int i, vector<int> &dp){
    if(i==0){
        return cost[i];
    }
    if(i==1){
        return cost[i];
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int take = cost[i]+ recurr(cost,i-1,dp);
    int nottake = cost[i]+ recurr(cost,i-2,dp);
    return dp[i]=min(take,nottake);
}
    int minCostClimbingStairs(vector<int>& cost) {
         int i= cost.size()-1;
        vector<int> dp(i+1,-1);
       
        return min(recurr(cost,i-1,dp),recurr(cost,i,dp));
    }
};