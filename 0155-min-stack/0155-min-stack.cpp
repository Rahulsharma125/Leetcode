class MinStack {
    stack<int> st;
    int minvalue;
public:
    MinStack() {
        minvalue = INT_MAX;
    }
    
    void push(int value) {
        st.push(value);
        if(value < minvalue){
            minvalue = value;
        }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
        if(st.empty()) {
                minvalue = INT_MAX;
            }
            else {
                minvalue = st.top();

                stack<int> temp = st;
                while(!temp.empty()) {
                    minvalue = min(minvalue, temp.top());
                    temp.pop();
                }
            }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minvalue;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */