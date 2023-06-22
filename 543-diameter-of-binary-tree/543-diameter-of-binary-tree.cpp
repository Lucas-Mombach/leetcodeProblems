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
    int depthOfBinaryTree(TreeNode* root){
        if(!root) return 0;
        int depthLeft = depthOfBinaryTree(root->left);
        int depthRight = depthOfBinaryTree(root->right);
        return max(depthRight,depthLeft)+1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int depthLeft = diameterOfBinaryTree(root->left);
        int depthRight = diameterOfBinaryTree(root->right);
        int ans =depthOfBinaryTree(root->left) + depthOfBinaryTree(root->right);
        return max(depthRight,max(depthLeft,ans));

        
    }
};