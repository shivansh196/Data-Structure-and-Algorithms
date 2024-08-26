class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int count=0;
        int ans=0;
        int maxi = INT_MIN;
        while(right<nums.size()){
            
            if(nums[right]==0 ){
                count++;
                
            }
            while(count>k){
                
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            if(count<=k){
                ans = right-left+1;
                maxi = max(maxi,ans);
            }
            
          right++;
        }
        return maxi;
    }
};