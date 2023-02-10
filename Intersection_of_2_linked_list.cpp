// Intersection of 2 linked List    Leetcode 160    @devottam2809

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>umap;
        ListNode *currentA=headA;
        while(currentA!=NULL)
        {
            umap[currentA]++;
            currentA=currentA->next;
        }
    ListNode *currentB=headB;
    while(currentB!=NULL)
    {
        if(umap.find(currentB)!=umap.end())
            return currentB;
        currentB=currentB->next;
    }
return NULL;
    }
};
