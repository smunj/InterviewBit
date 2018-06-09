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
    TreeNode* t;
    int d;
};

void fn(queue<node> q, map<int, vector<int> > &m){
    if(q.empty()){
        return;
    }
    node temp = q.front();
    q.pop();
    int v = (temp.t)->val;
    int d = temp.d;
    
    if(!temp.t){
        return;
    }
    
    m[d].push_back(v);
    if((temp.t)->left){
        node n;
        n.t = (temp.t)->left;
        n.d = d-1;
        q.push(n);
    }
    if((temp.t)->right){
        node n1;
        n1.t = (temp.t)->right;
        n1.d = d+1;
        q.push(n1);
    }
    fn(q, m);
}

vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    vector<vector<int> > ans;
    queue<node> q;
    node root;
    root.t = A;
    root.d = 0;
    q.push(root);
    map<int, vector<int> > m;
    fn(q, m);
    
    map<int, vector<int> >::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        vector<int> ret;
        for(int i = 0; i < (it->second).size(); i++){
            ret.push_back((it->second)[i]);
        }
        ans.push_back(ret);
    }
    return ans;
}

