class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> que;
        int count=1;
        que.push({beginWord,count});
        unordered_set<string> st(wordList.begin(),wordList.end());
        st.erase(beginWord);
       // count++;
        while(!que.empty()){
            pair<string,int> node = que.front();
            que.pop();
            string word = node.first;
            int count = node.second;
            if(word==endWord){
                return count;
            }

            for(int i=0;i<word.size();i++){
                char original = word[i];
                for(char ch = 'a';ch<='z';ch++){
                    word[i]=ch;
                    
                    if(st.find(word)!=st.end()){
                        st.erase(word);
                        // count++;
                         que.push({word,count+1});
                    }
                }
                word[i] = original;
            }
        }
        return 0;
    }
};