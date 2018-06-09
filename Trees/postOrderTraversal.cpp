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

vector<int> Solution::postorderTraversal(TreeNode* A) {

    stack<node> s1;
    stack<node> s2;
    
    node n;
    n.root = A;
    
    vector<int> ans;
    
    if(A == NULL){
        return ans;
    }
    
    s1.push(n);
    
    while(!s1.empty()){
        node temp = s1.top();
        s1.pop();
        s2.push(temp);
        if((temp.root)->left){
            node n1;
            n1.root = (temp.root)->left;
            s1.push(n1);
        }
        if((temp.root)->right){
            node n2;
            n2.root = (temp.root)->right;
            s1.push(n2);
        }
    }
    
    while(!s2.empty()){
        ans.push_back(s2.top().root->val);
        s2.pop();
    }
    return ans;
}

