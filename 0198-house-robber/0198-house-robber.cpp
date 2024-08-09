class Solution {
public:
    int recurr(vector<int>& nums, int i, vector<int> &dp){
        if(i==0){
            return nums[i];
        }
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int pick = nums[i] + recurr(nums,i-2,dp);
        int notpick = recurr(nums,i-1,dp);
        return dp[i]= max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int i = nums.size()-1;
        vector<int> dp(i+1,-1);
        return recurr(nums,i,dp);
    }
};