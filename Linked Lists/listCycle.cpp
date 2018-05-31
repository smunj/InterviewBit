/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ListNode* slow = A;
    ListNode* fast = A;
    ListNode* curr = NULL;
    
    if(A == NULL){
        return A;
    }
    
    while(slow != NULL && fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = (fast -> next) -> next;
        if(slow == fast){
            curr = slow;
            break;
        }
    }
    
    if(curr == NULL){
        return NULL;
    }
    
    ListNode* a = curr;
    ListNode* b = curr;
    int c = 0;
    while(a -> next != b){
        c++;
        a = a -> next;
    }
    c++;
    
    a = A;
    b = A;
    
    while(c){
        b = b -> next;
        c--;
    }
    
    while(a != b){
        a = a -> next;
        b = b -> next;
    }
    return a;
}

