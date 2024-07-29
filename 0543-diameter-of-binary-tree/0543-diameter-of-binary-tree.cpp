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
    int  longestpath(TreeNode* root, int &ans){
      
        if(root==NULL){
            return 0;
        }
        int lheight,rheight = 0;
         lheight = longestpath(root->left,ans) + 1;
         rheight = longestpath(root->right,ans) + 1;
         
          ans = max(ans,lheight+rheight);
         
        return max(lheight,rheight) ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
          int ans = 0;
          
        longestpath(root,ans);
        return ans-2;
        
    }
};