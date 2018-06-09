/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    map<int, int> m;
    for(int i = 0; i < A.size(); i++){
        ListNode* temp = A[i];
        while(temp != NULL){
            int t = temp -> val;
            if(m.find(t) == m.end()){
                m[t] = 1;
            }
            else{
                m[t]++;
            }
            temp = temp -> next;
        }
    }
    
    ListNode* head = NULL;
    ListNode* curr = NULL;
    
    map<int, int>::iterator it;
    it = m.begin();
    while(it != m.end()){
        while((it->second)){
            ListNode* tt = new ListNode(it->first);
            if(head == NULL){
                head = tt;
                curr = tt;
            }
            else{
                curr->next = tt;
                curr = curr -> next;
            }
            (it->second)--;
        }
        it++;
    }
    return head;
}

