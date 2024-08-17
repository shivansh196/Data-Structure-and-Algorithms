class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> ans;
        int sum =0;
        for(int i=0;i<nums.size();i++){
           left.push_back(sum);
           sum= sum+ nums[i];
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            right.push_back(sum);
            sum = sum+nums[i];

        }
        reverse(right.begin(),right.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans ;
    }
};