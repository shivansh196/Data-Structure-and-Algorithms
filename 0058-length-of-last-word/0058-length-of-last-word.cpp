class Solution {
public:
    int lengthOfLastWord(string s) {
      
        int count=0;
      
        int i = s.size()-1;
        while(i>=0){
           
              if(!isalnum(s[i]) ){
                i--;
              
                if(count!=0){
                    return count;
                }
        
              }
              else if(isalnum(s[i])){
               
                count++;
                i--;
              }

        }
        return count;
    }
};