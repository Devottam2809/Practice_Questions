// Linked List Cycle 2      leetcode 142    @devottam2809

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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> set;
        ListNode *current=head;
        while(current!=NULL)
        {
            if(set.find(current)!=set.end())
                return current;
            else{
                set.insert(current);
                current=current->next;
            }
        }
    return NULL;
    }
};
