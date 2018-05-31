/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int count = 0;
    ListNode* curr;
    ListNode* prev;
    
    curr = A;
    
    if(A == NULL){
        return A;
    }
    
    while(curr != NULL){
        count++;
        curr = curr -> next;
    }
    
    B = B % count;
    int c = count - B;
    
    if(c == count){
        return A;
    }
    
    curr = A;
    prev = NULL;
    
    while(c){
        prev = curr;
        curr = curr->next;
        c--;
    }
    
    ListNode* cu;
    ListNode* pr;
    cu = curr;
    pr = NULL;
    while(cu->next != NULL){
        pr = cu;
        cu = cu -> next;
    }
    if(curr != A){
        cu -> next = A;
        pr = cu;
        cu = cu -> next;
    }
    while(cu -> next != curr){
        pr = cu;
        cu = cu -> next;
    }
    cu -> next = NULL;
    return curr;
}

