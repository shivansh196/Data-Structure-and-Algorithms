class KthLargest {
public:

   priority_queue<int, vector<int>, greater<int>> que;
   int k;
    KthLargest(int k, vector<int>& nums) {
     this->k=k;
        for(int i=0;i<nums.size();i++){
            que.push(nums[i]);
            if(que.size()>k) que.pop();
        }
    }
    
    int add(int val) {
        que.push(val);
        if(que.size()>k){
            que.pop();
     
        }
        return que.top();

    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */