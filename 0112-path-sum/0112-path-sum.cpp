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
bool recurr(TreeNode* root, int targetSum, int temp){
    if(root==NULL){
        
        return NULL;
    }
    
    temp = temp + root->val;
    if((temp)==targetSum && root->left ==NULL && root->right == NULL ){
        return true;
    }
   bool left = recurr(root->left,targetSum,temp);
   bool right = recurr(root->right,targetSum,temp);

   if(left || right){
    return true;
   }
   return false;

}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int temp =0;
        
        return recurr(root,targetSum, temp);
    }
};