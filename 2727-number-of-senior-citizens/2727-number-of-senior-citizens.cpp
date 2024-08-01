class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =0;
        for(int j=0;j<details.size();j++){
            
                if(details[j][11]=='6'){
                    if(details[j][12]>='1'){
                        count++;
                    }
                }
           else if(details[j][11]>'6'){
                   
                        count++;
                    
                }
              
        }
              return count;
    }
};