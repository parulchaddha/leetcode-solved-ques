/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *A=headA;
        ListNode *B = headB;
        while(A!=NULL){
            while(B!=NULL){
                if(A==B)
                    return A;
                 B=B->next;
            }
           B=headB;
           A=A->next;
        }
        return 0;
    }
}; 