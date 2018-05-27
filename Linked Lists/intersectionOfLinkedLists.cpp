/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int length(ListNode* A, int &lA){
    while(A != NULL){
        A = A -> next;
        lA++;
    }
    return lA;
} 
 
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int lA = 0;
    int lB = 0;
    length(A, lA);
    length(B, lB);
    int d;
    
    if(lA > lB){
        d = lA - lB;
        while(d){
            A = A -> next;
            d--;
        }
        while(A != NULL && B != NULL){
            if(A == B){
                return A;
            }
            A = A -> next;
            B = B -> next;
        }
        return NULL;
    }
    else if (lB > lA){
        d = lB - lA;
        while(d){
            B = B -> next;
            d--;
        }
        while(A != NULL && B != NULL){
            if(A == B){
                return A;
            }
            A = A -> next;
            B = B -> next;
        }
        return NULL;
    }
    else{
        while(A != NULL && B != NULL){
            if(A == B){
                return A;
            }
            A = A -> next;
            B = B -> next;
        }
        return NULL;
    }
}

