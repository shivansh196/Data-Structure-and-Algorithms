class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert(nums[i]);
           
        }
        
        for(int i=0;i<n;i++){
            nums.pop_back();
        }
        for(auto it:mp){
            nums.push_back(it);
            
        }
        return mp.size();
    }
};