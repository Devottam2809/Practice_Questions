// 206 Leet Code
// reverse Linked List @devottam2809

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode *prev=NULL;
    ListNode *next=NULL;
    ListNode *current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        
        prev=current;
        current=next;
    }
    head=prev;
    return head;
    }
};
