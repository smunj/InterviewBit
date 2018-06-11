/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int fn(vector<int> &A, int val, int s, int e){
    for(int i = s; i <= e; i++){
        if(A[i] == val){
            return i;
        }
    }
    return -1;
}

TreeNode* check(vector<int> &A, vector<int> &B, int s, int e, int& t){
    if(s > e){
        return NULL;
    }
    
    TreeNode* root = new TreeNode(B[t]);
    t--;
    
    if(s == e){
        return root;
    }
    
    int index = fn(A, root -> val, s, e);
    
    
    root -> right = check(A, B, index+1, e, t);
    root -> left = check(A, B, s, index-1, t);

    return root;
    
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int t = A.size()-1;
    return check(A, B, 0, A.size()-1, t);
}

