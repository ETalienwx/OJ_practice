class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(const auto& str : tokens)
        {
            if(str == "+" || str == "-" || str == "*" || str == "/")
            {
                //遇到操作符就近取两个操作数进行运算
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                switch(str[0])//判断是什么操作符
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
                st.push(atoi(str.c_str()));//数字入栈
            }
        }
        return st.top();
    }
};