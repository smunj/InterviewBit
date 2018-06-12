/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::recoverTree(TreeNode* A) {
    vector<int> ans;
    TreeNode* curr;
    curr = A;
    TreeNode* prev;
    TreeNode* w;
    
    stack<TreeNode*> s;
    while(1){
        if(curr != NULL){
            s.push(curr);
            curr = curr -> left;
        }
        else{
            curr = s.top();
            s.pop();
            if(prev == NULL){
                prev = curr;
                curr = curr -> right;
            }
            else{
                if(prev -> val > curr -> val){
                    if(ans.size() == 0){
                        ans.push_back(prev -> val);
                    }
                    w = curr;
                }
                prev = curr;
                curr = curr -> right;
            }
        }
        if(s.empty() && curr == NULL){
            break;
        }
    }
    ans.push_back(w->val);
    sort(ans.begin(), ans.end());
    return ans;
}

