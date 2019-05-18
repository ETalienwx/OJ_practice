class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> st;
        size_t PushIndex = 0;
        size_t PopIndex = 0;
        while(PushIndex < pushV.size())//pushV走到头了就结束
        {
            st.push(pushV[PushIndex]);//插入到栈里
            PushIndex++;
            while(!st.empty() && st.top() == popV[PopIndex])//栈不为空并且栈顶数据等于popV的那个值就要pop一次栈，并且让popV向后走一下
            {
                st.pop();
                PopIndex++;
            }
        }
        return st.empty();//最后如果栈为空，说明匹配完了，是正确的序列，栈不为空说明失败了，匹配不成功，不是正确的序列
    }
};