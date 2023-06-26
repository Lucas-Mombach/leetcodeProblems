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
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root->right != nullptr)
        retRight(root->right,sum);
        if(root->left != nullptr)
        retLeft(root->left,sum);
        return sum;
    }
private:
    int retLeft(TreeNode* root,int &sum){
        
        if((root->left == nullptr) && (root->right == nullptr)){
            sum += root->val;
            return 0;
        }
        if(root->right != nullptr) retRight(root->right,sum);
        if(root->left != nullptr) retLeft(root->left,sum);
        return 1;
        
        
    }
    int retRight(TreeNode* root,int &sum){
        if(root->right != nullptr) retRight(root->right,sum);
        if(root->left != nullptr) retLeft(root->left,sum);
        return 1;
    }
};