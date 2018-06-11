/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int max(vector<int>A, int s, int e){
    int mm = A[s];
    int index = s;
    for(int i = s+1; i <= e; i++){
        if(A[i] > mm){
            mm = A[i];
            index = i;
        }
    }
    return index;
}

TreeNode* check(vector<int>&A, int start, int end){
    if(start > end){
        return NULL;
    }
    int m = max(A, start, end);
    TreeNode* root = new TreeNode(A[m]);
    root->left = check(A, start, m-1);
    root->right = check(A, m+1, end);
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    return check(A, 0, A.size()-1);
}

