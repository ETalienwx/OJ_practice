class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> st;
        size_t PushIndex = 0;
        size_t PopIndex = 0;
        while(PushIndex < pushV.size())//pushV�ߵ�ͷ�˾ͽ���
        {
            st.push(pushV[PushIndex]);//���뵽ջ��
            PushIndex++;
            while(!st.empty() && st.top() == popV[PopIndex])//ջ��Ϊ�ղ���ջ�����ݵ���popV���Ǹ�ֵ��Ҫpopһ��ջ��������popV�����һ��
            {
                st.pop();
                PopIndex++;
            }
        }
        return st.empty();//������ջΪ�գ�˵��ƥ�����ˣ�����ȷ�����У�ջ��Ϊ��˵��ʧ���ˣ�ƥ�䲻�ɹ���������ȷ������
    }
};