class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        long temp = coins;
        sort(costs.begin(),costs.end());
        long count=0;
        for(int i=0;i<costs.size();i++){
            if(costs[i]<=temp)
                   count++;
                   temp = temp-costs[i];
        }
        return count;
    }
};