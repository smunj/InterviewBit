/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int fn(TreeNode* A, int k, int t){
    if(A == NULL){
        return max(0, t);
    }
    if(A->left == NULL && A->right == NULL){
        return max(t,k);
    }
    
    return max(fn(A->left, k+1, t), fn(A->right, k+1, t));
}

int Solution::maxDepth(TreeNode* A) {
    if(A == NULL){
        return 0;
    }
    return fn(A, 1, 1);
}

