/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int fn(TreeNode* A, int B){
    if(A == NULL){
        return 0;
    }
    if(B == A->val && A->left == NULL && A->right == NULL){
        return 1;
    }
    return fn(A->left, B - A->val) || fn(A->right, B - A->val);
}

int Solution::hasPathSum(TreeNode* A, int B) {
    return fn(A, B);
}

