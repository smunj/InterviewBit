/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int check(TreeNode* A, TreeNode* B){
    if(A == NULL && B == NULL){
        return 1;
    }
    
    else if(A == NULL && B != NULL){
        return 0;
    }
    
    else if(B == NULL && A != NULL){
        return 0;
    }
    
    else if(A -> val != B -> val){
        return 0;
    }
    
    else{
        return check(A->left, B->left) && check(A->right, B->right);
    }
}

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    return check(A, B);
}

