class Solution {
public:
    int recurr(vector<int>& nums, int sum2, int i, vector<vector<int>> &dp){
        if (i == 0) {
        if (sum2 == 0 && nums[0] == 0)
            return 2; // Two ways to partition: include or exclude the element
        if (sum2 == 0 || sum2 == nums[0])
            return 1; // One way to partition: include or exclude the element
        return 0; // No way to partition
    }
        if(dp[i][sum2]!=-1)
        return dp[i][sum2];
     int take=0;
     int nottake=0;
       
       if(nums[i]<=sum2)
        take = recurr(nums,sum2-nums[i],i-1,dp);
 
  

      nottake = recurr(nums,sum2,i-1,dp);
     
     
        

        return dp[i][sum2] =  take+nottake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total +=nums[i];
        }
        int i=nums.size();
       
      int  sum2 = (total-target)/2;
      if(total-target<0)
      return false;
      if((total-target)%2==1)
      return false;
      vector<vector<int>> dp(i+1,vector<int>(sum2+1,-1));

      return  recurr(nums,sum2,i-1,dp);
    }
};