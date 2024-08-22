class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       map<int, int> mp;
        int n= groupSize;
        sort(hand.begin(),hand.end());
        if(groupSize==1 && hand.size()!=0){
            return true;
           }
        if((hand.size())%(groupSize)!=0 ){
           
            return false;
        }

        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        for(int i=0;i<hand.size();i++){
            if(mp[hand[i]]==0){
                continue;
            }
            mp[hand[i]]--;
            int temp = hand[i];
            int count = groupSize-1;
            while(count!=0){
                if(mp[temp+1]==0){
                    return false;
                }
                
                    mp[temp+1]--;
                    count--;
                    temp++;
                
            }
        }
        return true;
    }
};