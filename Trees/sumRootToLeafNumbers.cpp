/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int fn(TreeNode* A, int k){
    if(A == NULL){
        return 0;
    }
    
    k = ((((k % 1003) * 10) % 1003) + ((A->val) % 1003)) % 1003;
    
    if(A->left == NULL && A->right == NULL){
        return k;
    }
    
    return (fn(A->left, k) + fn(A->right, k)) % 1003;
}

int Solution::sumNumbers(TreeNode* A) {
    if(A == NULL){
        return 0;
    }
    return fn(A, 0);
}

