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
    ListNode* deleteDuplicates(ListNode* head) {
        //if(head==NULL)
        //    return NULL;
        ListNode* temp=head;
        ListNode* tt;
        while(temp!=NULL){
            if(temp->next!=NULL && temp->next->val==temp->val){
                tt=temp->next;
                temp->next=temp->next->next;
                free(tt);
            }
            else
                temp=temp->next;
            
        }
        
        return head;
    }
    
};
