class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int ans =INT_MIN;
        while(start!=end){
            int mini = min(height[start],height[end]);
            int area = mini * (end-start);
            if(mini == height[start]){
                start++;
            }
            else{
                end--;
            }
            ans =  max(ans,area);
        }
        return ans;
    }
};