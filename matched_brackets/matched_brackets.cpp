class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        stack<char> st;
        if(n%2!=0)
            return false;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]=='(')
                st.push(A[i]);
            else if(A[i]==')')
            {
                if(!st.empty())
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};