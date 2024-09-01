class Solution {
public:
    int countHomogenous(string s) {
       
        long final =0;
        long ans=0;
        final = final + s.size();
        for(int i=1;i<=s.size();i++){
            if(s[i]==s[i-1]){
                ans++;
            }
            else{
                while((ans-1)>=0){
                    final = final +ans;
                    ans--;
                }
                ans=0;
            }
        }
        return (final)%(1000000007);
    }
};