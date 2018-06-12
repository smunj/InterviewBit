/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

stack<TreeNode*> s;
TreeNode* curr = NULL;

BSTIterator::BSTIterator(TreeNode *root) {
    while(!s.empty()){
        s.pop();
    }
    curr = root;
    while(curr != NULL){
        s.push(curr);
        curr = curr -> left;
    }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(s.empty()){
        return false;
    }
    return true;
}

/** @return the next smallest number */
int BSTIterator::next() {
    if(s.empty()){
        return -1;
    }
    curr = s.top();
    s.pop();
    int ret = curr -> val;
    curr = curr -> right;
    while(curr != NULL){
        s.push(curr);
        curr = curr -> left;
    }
    return ret;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

