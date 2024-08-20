class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN;
        int count=0;
        for(auto it: sentences){
            count=0;
            for(int i=0;i<it.size();i++){
                if(!isalnum(it[i])){
                    count++;
                }
                maxi = max(maxi,count);
            }

        }
        return maxi+1;
    }
};