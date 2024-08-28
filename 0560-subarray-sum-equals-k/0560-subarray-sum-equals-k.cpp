class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum =0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            // if(nums[i]==k){
            //     count++;
            // }
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum = sum+nums[j];
                if(sum==k){
                    count++;
                   // sum=0;
                }
            }

        }
        return count;
    }
};