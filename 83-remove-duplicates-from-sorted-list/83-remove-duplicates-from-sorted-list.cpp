/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* curr=head;
        while(temp!=NULL)
        {
            curr=temp;
            while(curr->next!=NULL && curr->val==curr->next->val)curr=curr->next;
            temp->next=curr->next;
            temp=temp->next;
        }
        return head;
        
    }
};