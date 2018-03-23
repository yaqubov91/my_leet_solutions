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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* cur=head,*prev=NULL,*temp=NULL;
        while(true){
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            if(temp==NULL)
                break;
            cur=temp;            
        }
        return cur;
    }
};
