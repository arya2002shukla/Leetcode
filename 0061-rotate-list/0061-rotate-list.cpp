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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp=head;
        ListNode* newhead=NULL;
        if(head==NULL){
            return head;
        }
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int j = k%v.size();
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+j);
        reverse(v.begin()+j,v.end());
        for(auto i:v){
            ListNode* n = new ListNode(i);
            if(newhead==NULL){
                newhead=n;
            }
            else{
                ListNode* temp1 = newhead;
                while(temp1->next!=NULL){
                    temp1=temp1->next;
                }
                temp1->next=n;
            }
        }

        return newhead;
    }
};