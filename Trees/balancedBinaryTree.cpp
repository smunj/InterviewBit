/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int check(TreeNode* root){
    if(root == NULL){
        return 1;
    }
    else if(root->left == NULL && root->right == NULL){
        return 1;
    }
    else if(root->left == NULL){
        TreeNode* temp = root->right;
        if(temp->left != NULL || temp->right != NULL){
            return 0;
        }
        return 1;
    }
    else if(root->right == NULL){
        TreeNode* temp = root->left;
        if(temp->left != NULL || temp->right != NULL){
            return 0;
        }
        return 1;
    }
    else{
        return check(root->left) && check(root->right);
    }
}

int Solution::isBalanced(TreeNode* A) {
    return check(A);
}

