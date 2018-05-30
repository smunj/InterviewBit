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
    ListNode* next;
    ListNode* curr;
    
    curr = A;
    prev = NULL;
    next = NULL;
    int c = 0;
    
    while(curr != NULL && c < B){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        c++;
    }
    
    if(next != NULL){
        A -> next = Solution::reverseList(next, B);
    }
    return prev;
    
}

