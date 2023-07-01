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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        vector<int>v;
        while(temp1!=NULL){
            v.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            v.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(v.begin(),v.end());
        ListNode  *newhead = NULL;
        for(auto i:v){
            ListNode *n = new ListNode(i);
            if(newhead==NULL){
                newhead=n;
            }
            else{
                ListNode* temp3 = newhead;
                while(temp3->next!=NULL){
                    temp3=temp3->next;
                }
                temp3->next = n;
            }
        }

        return newhead;
    }
};