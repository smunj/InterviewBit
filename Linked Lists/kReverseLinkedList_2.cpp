/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* prev;
    ListNode* curr;
    stack<ListNode*> s;
    
    
    int c;
    prev = NULL;
    curr = A;
    
    while(curr != NULL){
        c = 0;
        while(curr != NULL && c < B){
            s.push(curr);
            c++;
            curr = curr -> next;
        }
        
        while(!s.empty()){
            if(prev == NULL){
                prev = s.top();
                A = prev;
                s.pop();
            }
            else{
                prev -> next = s.top();
                prev = prev -> next;
                s.pop();
            }
        }        
    }
    prev -> next = NULL;
    return A;
}

