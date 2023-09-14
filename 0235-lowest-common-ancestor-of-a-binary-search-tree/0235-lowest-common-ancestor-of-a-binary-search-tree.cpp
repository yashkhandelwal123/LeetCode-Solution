/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p || root == NULL || root == q) return root;
        
        TreeNode* left = lowestCommonAncestor(root->left ,p, q);
        TreeNode* right = lowestCommonAncestor(root->right ,p, q);
        
        if(left == nullptr) return right;
        else if(right == nullptr) return left;
        else return root;
    }
};