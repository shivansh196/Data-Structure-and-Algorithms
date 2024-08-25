class Solution {
public:
int func(vector<int>& nums, int goal){
 int left=0;
        int right =0;
        int count=0;
        int sum =0;
        if(goal<0){
            return 0;
        }
        while(right<nums.size()){
            sum = sum+nums[right];
            while(sum>goal){
                sum= sum-nums[left];
              
                left++;
            }
              count = count+(right-left+1);
            right++;
        }
        return count;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // int count=0;
        // int sum =0;
        // for(int i=0;i<nums.size();i++){
        //     sum=0;
        //     for(int j=i;j<nums.size();j++){
        //          sum = sum + nums[j];
        //          if(sum == goal){
        //             count++;
        //          }
        //          if(sum>goal){
        //             break;
        //          }
        //     }
        // }
        // return count;
       return func(nums,goal)-func(nums,goal-1);
    }
};