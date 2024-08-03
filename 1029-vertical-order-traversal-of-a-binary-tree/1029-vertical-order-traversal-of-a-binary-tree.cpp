/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> mp1;
        queue<pair<TreeNode*,pair<int,int>>> que;
        que.push(make_pair(root,make_pair(0,0)));

        while(!que.empty()){
           pair<TreeNode*,pair<int,int>> temp = que.front();
           TreeNode* node = temp.first;
           int hr = temp.second.first;
           int ver = temp.second.second;
           que.pop();
           (mp1[ver][hr]).push_back(node->val);
           if(node->left){
            que.push(make_pair(node->left,make_pair((hr+1),(ver-1))));

           }
            if(node->right){
            que.push(make_pair(node->right,make_pair((hr+1),(ver+1))));

           }


        }
vector<vector<int>> ans;

        for(auto it: mp1){
            vector<int> temp1;
            for(auto it1: it.second){
                sort(it1.second.begin(),it1.second.end());
                for(auto it2: it1.second){
                     temp1.push_back(it2);
                }
               
            }
             ans.push_back(temp1);
        }
return ans;
    }
};