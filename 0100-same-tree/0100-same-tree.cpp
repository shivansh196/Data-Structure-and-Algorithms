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
   bool recurr( TreeNode* q, TreeNode* p){
        if(q==NULL || p==NULL){
            if(q==NULL && p==NULL){
                return true;
            }
            else return false;
        }
        
        if(q->val != p->val){
            return false;
        }
    
     
     return ( recurr(q->left, p->left) && recurr(q->right, p->right)) ;

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       return recurr(p,q);
    }
};