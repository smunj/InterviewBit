/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* prev;
    ListNode* curr;
    stack<ListNode*> s;
    
    curr = A;
    prev = NULL;
    
    while(curr != NULL){
        int c = 0;
        while(curr != NULL & c < 2){
            s.push(curr);
            curr = curr -> next;
            c++;
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

