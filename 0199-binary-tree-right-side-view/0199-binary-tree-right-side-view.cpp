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
    // void recurr (TreeNode* root, vector<int> &ans){
    // if(root==NULL){
    //         return ;
    //     }
        
    //     ans.push_back(root->val);
    //     recurr(root->right,ans);
    // }
    void preorder(TreeNode* root, int level, vector<int> &ans){
        if(root==NULL){
            return ;
        }
        if(level == ans.size()){
            ans.push_back(root->val);
        }
        preorder(root->right,level+1,ans);
        preorder(root->left,level+1,ans);

    }
    vector<int> rightSideView(TreeNode* root) {
    //     vector<int> ans;
    // recurr(root,ans);
    // return ans;
   
//    queue<TreeNode*> que;
//    vector<int> ans;
//    que.push(root);
//    while(!que.empty()){
//     TreeNode* temp = que.front();
//     que.pop();
//     if(temp!=NULL)
//     ans.push_back(temp->val);
//     if(temp->left!=NULL){
//         que.push(temp->left);
//     }
//     if(temp->right!=NULL){
//         que.push(temp->right);
//     }
//    }
//    return ans;
vector<int> ans;
int level=0;
preorder(root,level,ans);
return ans;
    }
};