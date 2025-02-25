class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = nums.size()-1;
        int mid = left + (right-left)/2;
        while(left<=right){
            if(nums[mid] == target){
                return mid;
            }
            if(nums[left]<=nums[mid]){
                if(nums[left]<= target && nums[mid]>= target){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            else{
                if(nums[right]>=target && target>=nums[mid]){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
            mid = left + (right-left)/2;
        }
        return -1;
    }
};