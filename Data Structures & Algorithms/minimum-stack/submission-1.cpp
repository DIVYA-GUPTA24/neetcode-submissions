class MinStack {
public:
    stack<long long int>s;
    long long int mnVal;

    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            mnVal=val;
        }
        else
        {
           if(val<mnVal)
        {
            s.push((long long)2*val-mnVal);
            mnVal=val;
        }
        else
        {
            s.push(val);
        }
        }
        
    }
    
    void pop() {
        if(s.top()<mnVal)
        {
            mnVal=2*mnVal-s.top();
        }
        s.pop();

    }
    
    int top() {
        if(s.top()<mnVal)
        {
            return mnVal;
        }
        return s.top();
    }
    
    int getMin() {
        return mnVal;
    }
};
