class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans =0;
        for(int i=0;i<k;i++){
            ans = ans+cardPoints[i];
        }
        int curr = ans;
        for(int i=k-1;i>=0;i--){
            curr-=cardPoints[i];
            curr+=cardPoints[i-k+cardPoints.size()];

            ans = max(ans,curr);
        }
        return ans;
    }
};