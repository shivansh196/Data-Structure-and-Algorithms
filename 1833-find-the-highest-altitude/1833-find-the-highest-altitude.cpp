class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int temp =0;
        int maxi = 0;
        for(int i=0;i<gain.size();i++ ){
            temp = temp+gain[i];

            maxi = max(temp,maxi);
        }
        return maxi;
    }
};