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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> que;
        vector<double>temp;
        vector<double>ans;
        que.push(root);
        // if(root==NULL){
        //     return 0;
        // }
        while(que.size()){
            int s1 = que.size();
            while(s1--){
                TreeNode* topi = que.front();
                que.pop();
                if(topi->left){
                    que.push(topi->left);
                }
                if(topi->right){
                    que.push(topi->right);
                }
                temp.push_back(topi->val);
            }
            double sum=0;
            for(int i=0;i<temp.size();i++){
                 sum = sum + temp[i];
                
                
            }
            double m=0;
             m = temp.size();
            ans.push_back(sum/m);
            temp.clear();
           
            
        }
        return ans;
    }
};