class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long ans=0;
        int temp2 = x;
        while(x!=0){
            int temp = x%10;
            x = x/10;
            ans = ans*10 + temp; 
        }
        if(temp2 == ans){
            return true;
        }
        
        return false;
    }
};