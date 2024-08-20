class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count1=0;
        int count2=0;
        int ans =0;
        for(int i=0;i<s.size();i++){
            count1=0;
            count2=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='0'){
                    count1++;
                }
                if(s[j]=='1'){
                    count2++;
                }
                if(count1<=k||count2<=k ){
                     ans++;
                }
                
            }
        }
        return ans;
    }
};