class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> que;
        for(int i=0;i<stones.size();i++){
            que.push(stones[i]);
        }
        while(que.size()>1){
            int first = que.top();
            que.pop();
            int second = que.top();
            que.pop();
            int temp = first-second;
            if(temp>0){
                que.push(temp);
            }
        }
        if(que.size()>0) return que.top();
        else return 0;
    }
};