class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n= citations.size();
        int ans=0;
        
        sort(citations.rbegin(),citations.rend());
       for(int i=0;i<n;i++){
        if(citations[i]>=i+1 ){
            ans++;
           }
           else break;
       }
      
return ans;
    }
};