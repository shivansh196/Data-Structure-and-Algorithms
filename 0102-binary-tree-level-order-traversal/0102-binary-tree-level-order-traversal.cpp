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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int> ans;
        vector<vector<int>> finalans;
        if(root==NULL){
            return finalans;
        }
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int sizee = que.size();
                vector<int> ans;
         
            for(int i=0;i<sizee;i++){
                   TreeNode* temp = que.front();
            que.pop();
                if(temp->left){
                    que.push(temp->left);
                }
                if(temp->right){
                    que.push(temp->right);
                }
                ans.push_back(temp->val);
            }
            finalans.push_back(ans);
        }
        return finalans;
    }
};