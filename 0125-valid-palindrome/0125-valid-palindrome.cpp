class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" "){
            return true;
        }
       
        int left = 0;
         int right = s.size();
         while(left<right){
            if(tolower(s[left])==tolower(s[right])){
                left++;
                right--;
            }
           else if(!isalnum(s[left])){
                left++;
            }
             else if(!isalnum(s[right])){
                right--;
            }
           else if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            
         }
         return true;
    }
};