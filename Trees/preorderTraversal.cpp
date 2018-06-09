/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct node{
    TreeNode* root;
}; 
 
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<node> s;
    node r;
    r.root = A;
    
    vector<int> ans;
    
    if(A == NULL){
        return ans;
    }
    
    s.push(r);
    while(!s.empty()){
        node t = s.top();
        s.pop();
        ans.push_back((t.root)->val);
        if(t.root->right){
            node n1;
            n1.root = t.root->right;
            s.push(n1);
        }
        if(t.root->left){
            node n2;
            n2.root = t.root->left;
            s.push(n2);
        }
    }
    
    return ans;
}

