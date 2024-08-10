class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxi = INT_MIN;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
             int count=0;
             // maxi = INT_MIN;
             mp.clear();
            for(int j=i;j<s.size();j++){
                 mp[s[j]]++;
                 if(mp[s[j]]>1){
                    break;
                 }
                 count++;
                 maxi = max(maxi,count);
            }
        }
        if(s==""){
            return 0;
        }
        return maxi;
    }
};