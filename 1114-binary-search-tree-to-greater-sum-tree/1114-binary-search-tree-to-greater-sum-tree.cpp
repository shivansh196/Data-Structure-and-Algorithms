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
int sum=0;
    void recurr(TreeNode* root,vector<int> &preo,int i){
        if(root==NULL || i==(preo.size()-1)){
            return ;
        }
     
        
        recurr(root->left,preo,i+1);
           root->val = preo[i];
        recurr(root->right,preo,i+1);
    }
    TreeNode* preorder(TreeNode* root,vector<int> &preo){
        if(root==NULL){
            return root ;
        }
     
      preorder(root->right,preo);
      sum = sum + root->val;
      root->val = sum;
    //   preo.push_back(root->val);
      preorder(root->left,preo);
      return root;
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> preo;
         return preorder(root,preo);
        for(int i=preo.size()-1;i>=0;i--){
            int sum = sum+preo[i];
            preo[i]=sum;
        }
      int i=0;
      //  recurr(root,preo,i);
       // return root;
    }
};