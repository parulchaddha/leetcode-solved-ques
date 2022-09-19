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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>store;
        ListNode* res= new ListNode(0);
        auto *curr=res;
        int n = lists.size();
        for(auto i :lists){
            ListNode* temp=i;
            while(temp){
                store.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(store.begin(),store.end());
        int i = 0 ; 
        while(i<store.size()){
            curr->next=new ListNode(store[i++]);
            curr=curr->next;
        }
        return res->next;
    }
};