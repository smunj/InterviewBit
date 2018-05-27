/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode* curr;
    ListNode* prev;
    ListNode* next;
    
    curr = A;
    
    if(curr == NULL){
        return 1;
    }
    if(curr -> next == NULL){
        return 1;
    }
    
    ListNode* mid;
    mid = A;
    
    while((curr != NULL) && (curr -> next != NULL)){
        curr = (curr -> next) -> next;
        prev = mid;
        mid = mid -> next;
    }
    
    prev -> next = NULL;
    
    ListNode* newcurr;
    ListNode* newnext;
    ListNode* newprev;
    ListNode* temp;
    
    newcurr = mid;
    while(newcurr != NULL){
        temp = newcurr -> next;
        if(newcurr == mid){
            newcurr -> next = NULL;
            newprev = newcurr;
            newcurr = temp;
        }
        else{
            newcurr -> next = newprev;
            newprev = newcurr;
            newcurr = temp;
        }
    }
    
    curr = A;
    
    while((newprev != NULL) && (curr != NULL)){
        if(newprev -> val != curr -> val){
            return 0;
        }
        newprev = newprev -> next;
        curr = curr -> next;
    }
    return 1;
}

