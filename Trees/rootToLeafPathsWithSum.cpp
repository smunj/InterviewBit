/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void fn(TreeNode* A, int B, vector<vector<int> >& ans, vector<int> v){
    if(B == 0 && (A->left) == NULL && (A->right) == NULL){
        ans.push_back(v);
        return;
    }
    
    if(A->left != NULL){
        vector<int> temp(v);
        temp.push_back((A->left)->val);
        fn(A->left, B - ((A->left)->val), ans, temp);
    }
    
    if(A->right != NULL){
        vector<int> temp(v);
        temp.push_back((A->right)->val);
        fn(A->right, B - ((A->right)->val), ans, temp);
    }
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {

    vector<vector<int> >ans;
    vector<int>v;
    
    if(A == NULL){
        return ans;
    }
    
    v.push_back(A->val);
    fn(A, B - (A->val), ans, v);
    return ans;
}

