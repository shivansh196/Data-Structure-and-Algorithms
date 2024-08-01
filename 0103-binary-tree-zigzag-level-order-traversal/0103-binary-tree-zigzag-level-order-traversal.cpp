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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> que;
        
         int flag =0;
         if(root==NULL){
            return ans;
         }
          que.push(root);
          while(que.size()){
           
            vector<int> temp;
            int s1=que.size();

            while(s1--){
             TreeNode* topi = que.front();
             que.pop();
            
            if(topi->left!=NULL){
                que.push(topi->left);
            }
            if(topi->right!=NULL){
                que.push(topi->right);
            }
            temp.push_back(topi->val);
          }
          if(flag ==0){
            flag =1;
            ans.push_back(temp);
          }
          else{
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            flag=0;
          }
          }
          return ans;
    }
};