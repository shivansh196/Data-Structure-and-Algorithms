class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> que;
        for(int i=0;i<nums.size();i++){
            que.push(nums[i]);
        }
        while((k-1)!=0){
            que.pop();
            k--;
        }
        return que.top();
    }
};