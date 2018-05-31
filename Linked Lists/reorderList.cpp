/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    
    if(A == NULL || A -> next == NULL){
        return A;
    }
    
    ListNode* slow = A;
    ListNode* fast = A -> next;
    
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    ListNode* curr = A;
    ListNode* curr2 = slow -> next;
    slow -> next = NULL;
    
    ListNode* prev;
    ListNode* next;
    
    
    prev = NULL;
    
    while(curr2 != NULL){
        next = curr2 -> next;
        curr2 -> next = prev;
        prev = curr2;
        curr2 = next;
    }
    
    ListNode* next2;
    
    while(prev != NULL){
        next = curr -> next;
        next2 = prev -> next;
        curr -> next = prev;
        prev -> next = next;
        curr = next;
        prev = next2;
    }
    if(curr != NULL){
        curr -> next = NULL;
    }
    return A;
}

