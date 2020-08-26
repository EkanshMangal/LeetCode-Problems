https://leetcode.com/problems/min-stack/

class MinStack {
public:
    /** initialize your data structure here. */
        stack<int> st;
        stack<int> ss;
    MinStack() {
    }
    
    void push(int x) {
        st.push(x);
        if(ss.size()==0 || ss.top()>=x)
            ss.push(x);
    }
    
    void pop() {
        // if(st.size()==0)
        //     return -1;
        int ans=st.top();
        st.pop();
        if(ss.top()==ans)
            ss.pop();
        // return ans;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        if(ss.size()==0)
            return -1;
        return ss.top();
    }
};

