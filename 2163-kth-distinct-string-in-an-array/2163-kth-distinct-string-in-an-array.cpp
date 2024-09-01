class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int temp=k;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                temp--;
                if(temp==0){
                    return arr[i];
                }
            }
        }
        if(temp<=k){
            return "";
        }
        return arr[0];
    }
};