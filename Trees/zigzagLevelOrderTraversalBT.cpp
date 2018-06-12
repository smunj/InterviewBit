/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void fn(TreeNode* A, vector<vector<int> >& ans, int level){
    if(A == NULL){
        return;
    }
    if(ans.size() < level){
        vector<int> ret;
        ans.push_back(ret);
    }
    ans[level-1].push_back(A->val);
    fn(A->left, ans, level+1);
    fn(A->right, ans, level+1);
}


vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {

    vector<vector<int> > ans;
    fn(A, ans, 1);
    for(int i = 0; i < ans.size(); i++){
        if(i%2){
            reverse(ans[i].begin(), ans[i].end());
        }
    }
    return ans;
}

