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
    void recurr(TreeNode*root, vector<int> &temp){
        if(root==NULL){
            return;
        }
        recurr(root->left,temp);
        temp.push_back(root->val);
        recurr(root->right,temp);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> temp;
        recurr(root,temp);
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i+1]<=temp[i]){
                return false;
            }
        }
        return true;
    }
};