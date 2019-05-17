class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        _st.push(x);
        if(_minst.empty() || x <= _minst.top())
        {
            _minst.push(x);
        }
    }
    
    void pop() {
        if(_st.top() == _minst.top())
        {
            _minst.pop();
        }
        _st.pop();
    }
    
    int top() {
        return _st.top();
    }
    
    int getMin() {
        return _minst.top();
    }
    
    stack<int> _st;
    stack<int> _minst;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */