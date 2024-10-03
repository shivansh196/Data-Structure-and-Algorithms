class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>(n/2)){
                return nums[i];
            }
        }
        // for(auto it:mp){
        //     if(it.second>(n/2)){
        //         return it.first;
                
        //     }
       // }
        return 0;
    }
};