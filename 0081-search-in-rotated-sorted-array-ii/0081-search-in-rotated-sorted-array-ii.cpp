class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int ans =0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                ans = i+1;
                break;
            }
        }
        rotate(nums.begin(),nums.begin()+ans,nums.end());
       return  binary_search(nums.begin(),nums.end(),target);
    }
};