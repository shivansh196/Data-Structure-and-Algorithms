class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum[n];
        int count=0;
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++ ){
            sum[i]=nums[i]+sum[i-1];
        }
        map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[sum[i]]++;
        // }
        for(int i=0;i<n;i++){
            if(sum[i]==k){
                count++;
            }
            if(mp.find(sum[i]-k) != mp.end()){
                count+=mp[sum[i]-k];
            }
            mp[sum[i]]++;
        }
return count;
    }
};