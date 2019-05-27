//方法1：用快慢指针
class Solution {

public:

    bool hasCycle(ListNode *head) {

        if(head==nullptr)

            return false;

        ListNode* slow=head;

        ListNode* fast=head;

        while(fast&&fast->next)

        {

            slow=slow->next;

            fast=fast->next->next;

            if(slow==fast)

                return true;

        }

        return false;

    }

};
//方法2：用map映射关系
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr)
            return false;
        map<ListNode*,int> m;
        ListNode* cur = head;
        while(cur)
        {
            if(m[cur] == 0)
                m[cur] = 1;
            else
                return true;
            cur = cur->next;
        }
        return false;
    }
};