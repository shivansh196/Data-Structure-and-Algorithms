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
   TreeNode* recurr(TreeNode* temp,TreeNode* target){
        if(temp == NULL)
            return NULL;
        
        if(temp->val == target->val)
            return temp;
        
        TreeNode* leftside = recurr(temp->left,target);
        if(leftside!=NULL){
            return leftside;
        }
        TreeNode* rightside = recurr(temp->right,target);
        if(rightside!=NULL){
            return rightside;
        }
        return NULL ;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(target == NULL)
            return NULL;
       return recurr(cloned,target);
      //  return temp;

    }
};