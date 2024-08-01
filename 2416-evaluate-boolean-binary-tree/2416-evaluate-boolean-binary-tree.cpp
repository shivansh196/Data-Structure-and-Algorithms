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
    bool recurr(TreeNode* root){
        if(root==NULL){
            return false;
        }
        if(root->val==2){
          return (recurr(root->left))|| (recurr(root->right));
        }
        else if(root->val==3){
            return (recurr(root->left))&&(recurr(root->right));
        }
        else if(root->val==0){
            return false;
        }
        else if(root->val==1){
            return true;
        }
      
        return false;
    }
    bool evaluateTree(TreeNode* root) {
        return recurr(root);
    }
};