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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;
        // at first a tought that the correct if would be
        // if(root->left == nullptr && root->right == nullptr) return root;
        // but that's an undefined behavior since this could dereference a null pointer
        TreeNode* aux = invertTree(root->left);
        root->left = invertTree(root->right);  
        root->right = aux;

        return root;
    }
};