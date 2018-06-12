/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void fn(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    fn(root->left);
    fn(root->right);
    
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
}

TreeNode* Solution::invertTree(TreeNode* A) {
    fn(A);
    return A;
}

