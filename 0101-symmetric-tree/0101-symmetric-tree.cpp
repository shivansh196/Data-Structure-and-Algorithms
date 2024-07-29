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
 bool recurr(TreeNode* root,TreeNode* temp1,TreeNode* temp2){
  if(root==NULL ){
    return true;
  }
  if(temp1==NULL&& temp2==NULL){
    return true;
  }
  if(temp1==NULL|| temp2==NULL){
    return false;
  }
//   temp1 =temp1->left;
//    temp2= temp2->right;
  if(temp1->val != temp2->val  ){
    return false;
  }
  return recurr(root,temp1->left,temp2->right) &&  recurr(root,temp1->right,temp2->left);
 
// recurr(root->right );
 //return true;
 }
    bool isSymmetric(TreeNode* root) {
        TreeNode* temp1 =root;
  TreeNode* temp2= root;
       return recurr(root,temp1,temp2);
    }
};