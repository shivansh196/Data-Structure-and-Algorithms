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
void recurr(TreeNode* root,vector<int> &temp){
    if(root == NULL){
        return ;
    }
    recurr(root->left,temp);
    temp.push_back(root->val);
    recurr(root->right,temp);
}   
    int getMinimumDifference(TreeNode* root) {
           vector<int> temp;
        recurr(root,temp);
        int mini=INT_MAX;
        for(int i=0;i<temp.size();i++){
            for(int j=i+1;j<temp.size();j++){
                   mini=min(mini,abs(temp[i]-temp[j]));
            }
        }
       return mini;
    }
};