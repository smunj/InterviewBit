/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int c1 = 0;
    int c2 = 0;
    
    ListNode* prev;
    ListNode* curr;
    ListNode* curr2;
    
    curr = A;
    while(curr != NULL){
        c1++;
        curr = curr -> next;
    }
    
    curr = B;
    while(curr != NULL){
        c2++;
        curr = curr -> next;
    }
    
    curr = A;
    curr2 = B;
    int temp = 0;
    int sum = 0;
    if(c1 > c2){
        while(curr2 != NULL){
            sum = (curr -> val) + (curr2 -> val) + temp;
            if(sum >= 10){
                sum = sum % 10;
                temp = 1;
            }
            else{
                temp = 0;
            }
            curr -> val = sum;
            curr = curr -> next;
            curr2 = curr2 -> next;
        }
        while(curr != NULL){
            sum = (curr -> val) + temp;
            if(sum >= 10){
                sum = sum % 10;
                temp = 1;
            }
            else{
                temp = 0;
            }
            prev = curr;
            curr -> val = sum;
            curr = curr -> next;
        }
        if(temp){
            ListNode* tt = new ListNode(1);
            prev -> next = tt;
            tt -> next = NULL;
        }
        return A;
    }
    else if(c2 > c1){
        while(curr != NULL){
            sum = (curr -> val) + (curr2 -> val) + temp;
            if(sum >= 10){
                sum = sum % 10;
                temp = 1;
            }
            else{
                temp = 0;
            }
            curr2 -> val = sum;
            curr = curr -> next;
            curr2 = curr2 -> next;
        }
        while(curr2 != NULL){
            sum = (curr2 -> val) + temp;
            if(sum >= 10){
                sum = sum % 10;
                temp = 1;
            }
            else{
                temp = 0;
            }
            prev = curr2;
            curr2 -> val = sum;
            curr2 = curr2 -> next;
        }
        if(temp){
            ListNode* tt = new ListNode(1);
            prev -> next = tt;
            tt -> next = NULL;
        }
        return B;
    }
    else{
        while(curr != NULL){
            sum = (curr -> val) + (curr2 -> val) + temp;
            if(sum >= 10){
                sum = sum % 10;
                temp = 1;
            }
            else{
                temp = 0;
            }
            prev = curr2;
            curr2 -> val = sum;
            curr = curr -> next;
            curr2 = curr2 -> next;
        }
        if(temp){
            ListNode* tt = new ListNode(1);
            prev -> next = tt;
            tt -> next = NULL;
        }
        return B;
    }
}
