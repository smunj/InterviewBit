/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int count = 0;
    ListNode* curr;
    ListNode* prev;
    
    if(A == NULL){
        return A;
    }
    
    curr = A;
    
    while(curr != NULL){
        count++;
        curr = curr -> next;
    }
    
    if(B >= count){
        return A -> next;
    }
    else{
        // cout << count << endl;
        int temp = count - B;
        curr = A;
        prev = NULL;
        while(temp > 0){
            temp--;
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        return A;
    }
}

