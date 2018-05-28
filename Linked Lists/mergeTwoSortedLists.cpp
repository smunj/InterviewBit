/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* currA;
    ListNode* currB;
    ListNode* nextA;
    ListNode* nextB;
    
    currA = A;
    currB = B;
    
    if(currA == NULL && currB == NULL){
        return NULL;
    }
    
    if(currA == NULL){
        return currB;
    }
    
    if(currB == NULL){
        return A;
    }
    
    ListNode* curr = new ListNode(-1);
    
    while(currA != NULL && currB != NULL){
        if((currA -> val) <= (currB -> val)){
            curr -> next = currA;
            currA = currA -> next;
            curr = curr -> next;
        }
        else{
            curr -> next = currB;
            currB = currB -> next;
            curr = curr -> next;
        }
    }
    
    if(currA != NULL){
        while(currA != NULL){
            curr -> next = currA;
            currA = currA -> next;
            curr = curr -> next;
        }
    }
    
    if(currB != NULL){
        while(currB != NULL){
            curr -> next = currB;
            currB = currB -> next;
            curr = curr -> next;
        }
    }
    
    
    if(A->val <= B->val){
        return A;
    }
    return B;
    
}

