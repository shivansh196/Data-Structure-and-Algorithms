class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //unordered_map<char,int> mp;
         map<char,int> mp;
        for(int i=0;i<stones.size();i++){
            mp[stones[i]]++;
        }
        int sum =0;
        for(int i=0;i<jewels.size();i++){
         sum = sum+   mp[jewels[i]];
        }
        return sum;
    }
};