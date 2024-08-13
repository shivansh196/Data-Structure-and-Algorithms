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
int inorderindex(vector<int> &inorder,int n){
    int ans=0;
    for(int i=0;i<inorder.size();i++){
if(inorder[i]==n){
    ans =i;
}
    }
    return ans;
}
TreeNode* recurr(vector<int> &preorder, vector<int> &inorder,int n,int &i, int inorderstart, int inorderend){
    if(i>=n || inorderstart>inorderend){
      return NULL;
    }
    int element = preorder[i++];
    TreeNode* root = new TreeNode(element);
    int temp=inorderindex(inorder,element);
   root->left= recurr(preorder,inorder, n,i,inorderstart,temp-1);
    root->right=recurr(preorder,inorder,n,i,temp+1,inorderend);
return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n= preorder.size();
        int i=0;
       return recurr(preorder,inorder,n,i,0,n-1);
    }
};