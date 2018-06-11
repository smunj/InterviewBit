/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* check(const vector<int>&A, int s, int e){
    if(s > e){
        return NULL;
    }
    TreeNode* root = new TreeNode(A[(s+e)/2]);
    root->left = check(A, s, ((s+e)/2)-1);
    root->right = check(A, ((s+e)/2)+1, e);
    return root;
} 
 
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    return check(A, 0, A.size()-1);
}

