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
void recurr(TreeNode* root, int &ans, int maxi){
    if(root==NULL){
        return;
    }
    
    if(root->val>=maxi){
    ans++;
    }
    maxi = max(root->val,maxi);
recurr(root->left,ans, maxi);
recurr(root->right,ans, maxi);
}
    int goodNodes(TreeNode* root) {
        int ans =0;
        int maxi = root->val;
        recurr(root, ans, maxi);
        return ans;
    }
};