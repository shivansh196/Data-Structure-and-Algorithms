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
      int recurr(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = 1+recurr(root->left);
        int right = 1+ recurr(root->right);
        return max(left,right);
      }
    int maxDepth(TreeNode* root) {
        return recurr(root);
    }
};