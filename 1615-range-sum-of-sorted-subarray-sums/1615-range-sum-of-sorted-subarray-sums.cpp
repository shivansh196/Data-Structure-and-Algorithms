class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int start =0;
        int end = start +1;
        vector<int> temp;
        int sum=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                 sum = sum+nums[j];
                 temp.push_back(sum);
            }
            
        }
sort(temp.begin(),temp.end());
        for(int i=left-1;i<right;i++){
                 ans = ans + temp[i];
        }
        return ans% 1000000007;
    }
};