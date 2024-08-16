class Solution {
public:
    // Helper function to perform in-order traversal and check if values are in increasing order
    bool inorder(TreeNode* root, long long& prev) {
        if (!root) return true;
        
        // Check left subtree
        if (!inorder(root->left, prev)) return false;
        
        // Check current node
        if (root->val <= prev) return false;
        prev = root->val;
        
        // Check right subtree
        return inorder(root->right, prev);
    }
    
    bool isValidBST(TreeNode* root) {
        long long prev = LLONG_MIN; // Use a large negative value to handle edge cases
        return inorder(root, prev);
    }
};
