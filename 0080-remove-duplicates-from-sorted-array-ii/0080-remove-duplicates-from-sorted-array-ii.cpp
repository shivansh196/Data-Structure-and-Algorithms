class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=2;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                nums.erase(nums.begin()+j);
                
            }
            else{
            j++;
            i++;
            }
        }
        return nums.size();
    }
};