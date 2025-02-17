class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;

        }
        if(mp1==mp2){
            return true;
        }
        int left = 0;
        for(int i=s1.size();i<s2.size();i++){
            mp2[s2[i]]++;
            mp2[s2[left]]--;

            if(mp2[s2[left]]==0){
                mp2.erase(s2[left]);
            }
            left++;
            if(mp1==mp2){
                return true;
            }
        }
        return false;
    }
};