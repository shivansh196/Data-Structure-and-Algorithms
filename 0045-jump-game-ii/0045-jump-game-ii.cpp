class Solution {
public:
    int jump(vector<int>& nums) {
        int left =0;
        int right = 0;
       int  ans =0;
        int far =0;
     
        
        while(right<nums.size()-1){
           far =0;
           for(int i=left;i<=right;i++){
            far = max(far,i+nums[i]);
           }
           left = right+1;
           right = far;
           ans ++;
        }   
        return ans;
    }
};