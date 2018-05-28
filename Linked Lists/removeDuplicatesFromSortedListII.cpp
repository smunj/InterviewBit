/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* temp = new ListNode(-1);
    ListNode* curr;
    ListNode* prev;
    temp -> next = A;
    curr = A;
    prev = temp;
    
    while(curr != NULL){
        while((curr -> next != NULL) && (((prev -> next) -> val) == ((curr -> next) -> val))){
            curr = curr -> next;
        }
        if(prev -> next == curr){
            prev = prev -> next;
        }
        else{
            prev -> next = curr -> next;
        }
        curr = curr -> next;
    }
    A = temp -> next;
    return A;
}

