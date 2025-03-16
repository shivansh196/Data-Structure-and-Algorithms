class Solution {
public:
   bool recurr(long i, vector<int>& nums, int target, vector<vector<int>> &dp){
        if(target== 0){
            return true;
        }
        if(i==0){
            return nums[i] == target;
        }
         if(dp[i][target]!=-1){
            return dp[i][target];
         }
       bool notpick = recurr(i-1,nums, target, dp);
       bool pick = false;
       if(nums[i]<=target){
        pick = recurr(i-1,nums, target-nums[i], dp);
       }
  return dp[i][target]=(pick||notpick);
    }
    
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum = sum+ nums[i];
        }
        if(sum%2 != 0){
            return false;
        }
        int target = sum/2;
        long i=nums.size()-1;
                vector<vector<int>> dp(n,vector<int>(target+1, -1));

        return recurr(i, nums, target, dp);
    }
};