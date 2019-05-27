//����1���ÿ���ָ��
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
//����2����mapӳ���ϵ
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