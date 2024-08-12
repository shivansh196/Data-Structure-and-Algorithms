class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stringstream ss(s);
        string word="";
        stack<string> st;
        while(ss>>word){
               st.push(word);
        }
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
            if(st.size()==0){
                break;
            }
            ans = ans+" ";
        }
        return ans;
    }
};