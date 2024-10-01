class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int j=1;j<nums.size();j++){
        for(int i=1;i<nums.size();i++){

            if(nums[i-1]==0){
                swap(nums[i-1],nums[i]);
            }
        }
        }
    }
};