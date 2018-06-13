/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A == NULL){
        return NULL;
    }
    
    stack<TreeNode*> s;
    
    TreeNode* curr;
    TreeNode* finish;
    
    curr = A;
    
    if(curr->right){
        s.push(curr->right);
    }
    if(curr->left){
        s.push(curr->left);
    }
    
    while(!s.empty()){
        TreeNode* temp = s.top();
        s.pop();
        curr -> right = temp;
        curr -> left = NULL;
        curr = temp;
        if(temp -> right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
    curr -> left = NULL;
    curr -> right = NULL;
    
    return A;
}

