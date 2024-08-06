class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
       
        vector<int> temp;
        map<char,int> mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        for(auto it:mp){
            temp.push_back(it.second);
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        int ans=0;
        
        for(auto it: temp){
        if(count<8){
            ans = ans + it;
            count++;
        }
        else if(count>=8 && count<16){
            ans = ans + 2*(it);
            count++;
        }
        else if(count>=16 && count<24){
            ans = ans + 3*(it);
            count++;
        }
        else if(count>=24){
            ans = ans + 4*(it);
            count++;
        } 
        
        }
        return ans;
    }
};