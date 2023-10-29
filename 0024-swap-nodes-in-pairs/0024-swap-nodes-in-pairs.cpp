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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *present=head,*prev=nullptr,*prev_prev=nullptr;
        int iter=0;
        while(present){
            if(present->next==nullptr) break;
            if(iter>0) prev_prev=prev;
            prev=present;
            present=present->next;
            prev->next=present->next;
            if(iter>0) prev_prev->next=present;
            if(present) present->next=prev;
            if(iter==0) head=present;
            present=prev->next;
            iter+=1;
        }
        return head;


    }
};;