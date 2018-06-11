/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int sym(TreeNode* l, TreeNode* r){
    if(l == NULL && r == NULL){
        return 1;
    }
    else if(l == NULL && r != NULL){
        return 0;
    }
    else if(r == NULL && l != NULL){
        return 0;
    }
    else if(l -> val != r -> val){
        return 0;
    }
    return sym(l -> left, r -> right) && sym(l -> right, r -> left);
}

int check(TreeNode* root){
    if(root == NULL){
        return 1;
    }
    return sym(root->left, root->right);
}

int Solution::isSymmetric(TreeNode* A) {
    return check(A);
}

