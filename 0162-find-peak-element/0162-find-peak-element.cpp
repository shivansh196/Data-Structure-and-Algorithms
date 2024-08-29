class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low =0;
        int high = nums.size()-1;
        int mid = low + (high-low)/2;
        while(high>low){
              
            if(nums[mid+1]>nums[mid]){
                low = mid+1;
            }
            if(nums[mid+1]<=nums[mid]){
                high= mid;
            }
          mid  = low + (high-low)/2;
        }
        return mid;
    }
};