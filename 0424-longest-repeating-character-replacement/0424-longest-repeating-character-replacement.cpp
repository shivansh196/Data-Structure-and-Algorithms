class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), ans =0;
        for(int i='A';i<='Z';i++){
            int left =0, right=0, count=0;
            while(right<n){
                if(s[right]!=i){
                    count++;
                }
                while(count>k){
                    ans = max(ans, right-left);
                    if(s[left]!=i) count--;
                    left++;
                }
                right++;
            }
            ans = max(ans,right-left);
        }
        return ans;
    }
};