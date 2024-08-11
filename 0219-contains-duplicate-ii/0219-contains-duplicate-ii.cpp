class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;

        }
        for(int i=0;i<nums.size();i++){
            int temp1 = nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(mp[temp1]==1){
                    break;
                }
                if(nums[i]==nums[j] && (abs(i-j)<=k)){
                    return true;

                }
            }
        }
        return false;
    }
};