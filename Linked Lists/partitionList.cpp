/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* aa = new ListNode(-1);
    ListNode* bb = new ListNode(-1);
    
    ListNode* curr;
    ListNode* next;
    ListNode* aap;
    ListNode* bbp;
    ListNode* prev;
    
    aap = aa;
    bbp = bb;
    curr = A;
    
    while(curr != NULL){
        if((curr -> val) < B){
            aa -> next = curr;
            aa = aa -> next;
            curr = curr -> next;
        }
        else{
            bb -> next = curr;
            bb = bb -> next;
            curr = curr -> next;
        }
    }
    aa -> next = NULL;
    bb -> next = NULL;
    prev = NULL;
    curr = aap;
    while(curr != NULL){
        prev = curr;
        curr = curr -> next;
    }
    prev -> next = bbp -> next;
    aap = aap -> next;
    return aap;
}

