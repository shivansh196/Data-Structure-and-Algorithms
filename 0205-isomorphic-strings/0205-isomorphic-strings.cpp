class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1,mp2;
        for(int i=0;i<s.size();i++){
            char ch1 = s[i];
            char ch2 = t[i];
            if(mp1.find(ch1)!=mp1.end()){
                if(mp1[ch1]!=ch2){
                    return false;
                }
            }
            else if(mp2.find(ch2)!=mp2.end()){
                if(mp2[ch2]!=ch1){
                    return false;
                }
            }
            
            mp1[ch1]=ch2;
            mp2[ch2]=ch1;
            
        }
        return true;
    }
};