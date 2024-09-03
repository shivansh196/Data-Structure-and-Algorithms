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
  TreeNode* recurr(TreeNode* root, int ans){
        if(root==NULL){
             TreeNode* temp = new TreeNode(ans);
            return temp;
        }
           if(root->val>ans){
            root->left = recurr(root->left,ans);
           }
           else{
            root->right = recurr(root->right,ans);
           }
           return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       return recurr(root,val);
       
    }
};