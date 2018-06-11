/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::t2Sum(TreeNode* A, int B) {
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    
    int fin1 = 0;
    int fin2 = 0;
    
    int ret1 = 0;
    int ret2 = 0;
    
    TreeNode* curr1 = A;
    TreeNode* curr2 = A;
    
    while(1){
        while(!fin1){
            if(curr1 != NULL){
                s1.push(curr1);
                curr1 = curr1 -> left;
            }
            else{
                if(s1.empty()){
                    fin1 = 1;
                }
                else{
                    curr1 = s1.top();
                    s1.pop();
                    ret1 = curr1 -> val;
                    curr1 = curr1->right;
                    fin1 = 1;
                }
            }
        }
        
        while(!fin2){
            if(curr2 != NULL){
                s2.push(curr2);
                curr2 = curr2 -> right;
            }
            else{
                if(s2.empty()){
                    fin2 = 1;
                }
                else{
                    curr2 = s2.top();
                    s2.pop();
                    ret2 = curr2 -> val;
                    curr2 = curr2->left;
                    fin2 = 2;
                }
            }
        }
        if(ret1 + ret2 == B && ret1 != ret2){
            return 1;
        }
        if(ret1 + ret2 < B){
            fin1 = 0;
        }
        if(ret1 + ret2 > B){
            fin2 = 0;
        }
        if(ret1 >= ret2){
            return 0;
        }
    }
    return 0;
}
