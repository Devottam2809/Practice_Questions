// Leetcode 876  Middle of the Linked List    @devottam2809

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
        ListNode *current = head;
        ListNode *next = head;
        int length = 0;
        while(current!=NULL){
            length++;
            current=current->next;
            
        }
    int temp=length;
    length/=2;
    while(length--){
        next=next->next;
    }
        return next;

    }
};
