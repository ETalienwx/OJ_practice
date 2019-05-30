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
    ListNode *getmeet(ListNode *head)
    {
        if(head == nullptr)
            return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                return slow;         
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) { 
        ListNode* meet = getmeet(head);
        if(meet == nullptr)
            return NULL;
        ListNode* cur = head;
        while(meet && cur)
        {
            if(cur == meet)
                return meet;
            meet = meet->next;
            cur = cur->next;
        }
        return NULL;
    }
};