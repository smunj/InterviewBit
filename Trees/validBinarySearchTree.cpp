/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int check(TreeNode* root, int min, int max){
    if(root == NULL){
        return 1;
    }
    else if(root->val < max && root->val > min && check(root->left, min, root->val) && check(root->right, root->val, max)){
        return 1;
    }
    return 0;
}
 
int Solution::isValidBST(TreeNode* A) {
    return check(A, INT_MIN, INT_MAX);
}

