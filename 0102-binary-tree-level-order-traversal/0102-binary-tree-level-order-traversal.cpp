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
        vector<vector<int>> ans;
        queue<TreeNode*> que;
        int sizee=0;
        if(root==NULL){
            return ans;
        }
        vector<int> temp1;
        que.push(root);
       
        while(!que.empty()){
            
           vector<int> temp1;
           
             sizee = que.size();
          
           
            for(int i=0;i<sizee;i++){
                 TreeNode* temp = que.front();
                   que.pop();
                if(temp->left){
                    que.push(temp->left);
                    
                }
                if(temp->right){
                    que.push(temp->right);
                   
                }
                temp1.push_back(temp->val);
            }
            if(temp1.size()!=0)
            ans.push_back(temp1);
        }
        return ans;
    }
};