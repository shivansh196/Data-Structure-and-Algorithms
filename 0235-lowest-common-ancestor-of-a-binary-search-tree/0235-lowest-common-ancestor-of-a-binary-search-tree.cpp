/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
 TreeNode* ans = new TreeNode;
    TreeNode* recurr(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL){
            return NULL;
        }
        if(root->val== p->val || root->val== q->val){
            
            
            return root;
        }
       TreeNode* left= recurr(root->left,p,q);
       TreeNode* right = recurr(root->right,p,q);

      if(left!=NULL && right!=NULL){
        return root;
      }
       if(left!=NULL){
        return left;
       }
       else{
        return right;
       }
        return ans;
     }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     return   recurr(root,p,q);
    }
};