/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode* A, vector<int>& v){
    if(A == NULL){
        return;
    }
    inorder(A->left, v);
    v.push_back(A->val);
    inorder(A->right, v);
}

int Solution::t2Sum(TreeNode* A, int B) {
    vector<int> v;
    inorder(A, v);
    int i = 0;
    int j = v.size()-1;
    while(i < j){
        if(v[i] + v[j] == B){
            return 1;
        }
        if(v[i] + v[j] < B){
            i++;
        }
        if(v[i] + v[j] > B){
            j--;
        }
    }
    return 0;
}

