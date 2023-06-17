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
    int maxDepth(TreeNode* root) {
        //it is not the size of the tree but it's depth 
        if(!root) return 0;
        int depthLeft,depthRight;
        depthLeft  = maxDepth(root->left);
        depthRight = maxDepth(root->right);
        if(depthRight >= depthLeft) return depthRight+1;
        if(depthLeft >  depthRight) return depthLeft+1;
        return 1;
        
        
    }
};