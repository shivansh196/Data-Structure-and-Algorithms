class Solution {
public:
    // int recurr(vector<int> nums,int prev,int i,vector<vector<int>> &dp){
    //    if(nums.size()==0 || i==nums.size()){
    //     return 0;
    //    }
    //    if(dp[i][prev+1]!=-1){
    //     return dp[i][prev+1];
    //    }
    //    int nottake = recurr(nums,prev,i+1,dp);
    //    int take=0;
    //    if(prev==-1 || nums[prev]<nums[i]){
    //     prev = i;
    //         take =1+ recurr(nums,prev,i+1,dp);
    //    }
    //    return dp[i][prev+1]= max(take,nottake);
    // }
    int lengthOfLIS(vector<int>& nums) {
    //     int prev =-1;
    //     int i=0;
    //     int n= nums.size();
    //     vector<vector<int>> dp(n,vector<int>(n+1,-1));
    //    return recurr(nums,prev,i,dp);
    vector<int> ans;
    ans.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
         if(nums[i]>ans.back()){
            ans.push_back(nums[i]);
         }
         else{
             int temp = lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
           // int temp = binary
            ans[temp]=nums[i];
         }
    }
    return ans.size();
    }
};