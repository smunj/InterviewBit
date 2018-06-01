/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* reverse(ListNode* curr, ListNode* prev){
    if(curr == NULL){
        return prev;
    }
    ListNode* temp = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = temp;
    return reverse(curr, prev);
} 
 
ListNode* Solution::reverseList(ListNode* A) {
    if(A == NULL){
        return A;
    }
    return reverse(A, NULL);
}

