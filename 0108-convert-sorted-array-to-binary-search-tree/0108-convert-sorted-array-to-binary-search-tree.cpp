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
    TreeNode* createTree(vector<int>& nums , int i ,int j){
        if(i>j){
            return nullptr;
        }
        int mid = (i+j)/2;
        
        
        TreeNode* x = new TreeNode(nums[mid]);
        
        x->left = createTree(nums, i , mid-1);
        x->right = createTree(nums , mid+1 , j);
        
        return x;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree(nums , 0 , nums.size()-1);
        
    }
};