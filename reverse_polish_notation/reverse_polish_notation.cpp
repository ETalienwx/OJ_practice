class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(const auto& str : tokens)
        {
            if(str == "+" || str == "-" || str == "*" || str == "/")
            {
                //�����������ͽ�ȡ������������������
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                switch(str[0])//�ж���ʲô������
                {
                    case '+':
                        st.push(left + right);
                        break;
                    case '-':
                        st.push(left - right);
                        break;
                    case '*':
                        st.push(left * right);
                        break;
                    case '/':
                        st.push(left / right);
                        break;
                }
            }
            else
            {
                st.push(atoi(str.c_str()));//������ջ
            }
        }
        return st.top();
    }
};