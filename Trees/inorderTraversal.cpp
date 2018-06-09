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

vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<node> s;
    
    vector<int> ans;
    
    if(A==NULL){
        return ans;
    }
    
    node curr;
    curr.root = A;
    while(curr.root != NULL){
        s.push(curr);
        curr.root = curr.root -> left;
    }
    
    while(!s.empty()){
        node temp = s.top();
        s.pop();
        ans.push_back(temp.root->val);
        curr.root = temp.root->right;
        while(curr.root != NULL){
            s.push(curr);
            curr.root = curr.root -> left;
        }
    }
    return ans;
}

