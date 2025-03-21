class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
       
        int left = 0;
        int ans =0;
        unordered_map<char,int> mp;
         for(int right =0;right<s.size();right++){
            mp[s[right]]++;
            while(mp[s[right]]>1){
                mp[s[left]]--;
                left++;
            }
            ans = right-left+1;
            maxi = max(maxi,ans);
         }
        
        return maxi;
    }
};