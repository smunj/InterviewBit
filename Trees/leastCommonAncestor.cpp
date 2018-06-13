/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void path(TreeNode* A, int B, vector<int> v, vector<vector<int> >& ans){
    if(A == NULL){
        return;
    }
    v.push_back(A->val);
    if(A->val == B){
        ans.push_back(v);
        return;
    }
    if(A->left != NULL){
        vector<int> temp(v);
        path(A->left, B, temp, ans);
    }
    if(A->right != NULL){
        vector<int> temp(v);
        path(A->right, B, temp, ans);
    }
}

int Solution::lca(TreeNode* A, int B, int C) {
    vector<int> v;
    vector<int> w;
    vector<vector<int> >ans;
    if(A == NULL){
        return -1;
    }
    path(A, B, v, ans);
    path(A, C, w, ans);
    
    if(ans.size() != 2){
        return -1;
    }
    int ret = 0;
    for(int i = 0; i < min(ans[0].size(), ans[1].size()); i++){
        if(ans[0][i] == ans[1][i]){
            ret = ans[0][i];
        }
    }
    return ret;
}

