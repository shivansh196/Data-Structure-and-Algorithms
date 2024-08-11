class Solution {
public:
    int minPartitions(string n) {
        int maxi =0;
       // int temp = stoi(n);
        for(int i=0;i<n.size();i++){
         int temp = n[i]-'0';
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};