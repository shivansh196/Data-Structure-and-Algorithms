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
int findroot(vector<int> &inorder,int element){
    for(int i=0;i<inorder.size();i++){
        if(inorder[i]==element){
            return i;
        }
    }
    return -1;
}
    TreeNode* recurr(vector<int>& inorder, vector<int> &postorder, int &i, int n, int poststart, int postend){
        if(i<0 || poststart>postend ){
            return NULL;
        }
        int element = postorder[i--];
        TreeNode* root = new TreeNode(element);
        int temp = findroot(inorder,element);
        root->right = recurr(inorder,postorder,i,n,temp+1,postend);
        root->left = recurr(inorder,postorder,i,n,poststart, temp-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i=postorder.size()-1;
        int n= postorder.size()-1;
        int poststart = 0;
        int postend = n;
        return recurr(inorder,postorder,i,n,poststart,postend);
    }
};