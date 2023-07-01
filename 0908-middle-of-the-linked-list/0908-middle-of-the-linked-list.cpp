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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* newhead = NULL;
       
        int i=0;
        while(temp!=NULL){
            i++;
            temp =temp->next;
        }
        int k=i/2;
        ListNode* temp1 = head;
        int c=0;
        while(temp1!=NULL){
            if(c>=k){
                ListNode* n = new ListNode(temp1->val);
                if(newhead==NULL){
                    newhead=n;
                }
                else{
                    ListNode* temp3 = newhead;
                    while(temp3->next!=NULL){
                        temp3=temp3->next;
                    }
                    temp3->next=n;
                }
                
            }
            temp1=temp1->next;
            c++;
        }

        return newhead;
    }
};