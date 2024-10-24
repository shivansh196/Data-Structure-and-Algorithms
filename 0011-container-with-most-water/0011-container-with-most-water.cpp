class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0;

        while(i<j){
            int minHeight = min(height[i],height[j]);
            int width = j-i;
            int temp = minHeight*width;
            ans = max(ans,temp);

            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};