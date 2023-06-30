class MyQueue {
public:
    stack<int>stk1,stk2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk1.push(x);
    }
    
    int pop() {
        while(stk1.size()>1){
            stk2.push(stk1.top());
            stk1.pop();
        }
        int ans = stk1.top();
        stk1.pop();
        while(stk2.size()>0){
            stk1.push(stk2.top());
            stk2.pop();
        }

        return ans;
    }
    
    int peek() {
        while(stk1.size()>1){
            stk2.push(stk1.top());
            stk1.pop();
        }
        int ans = stk1.top();
        stk1.pop();
        stk2.push(ans);
        while(stk2.size()>0){
            stk1.push(stk2.top());
            stk2.pop();
        }

        return ans;
    }
    
    bool empty() {
        if(stk1.empty()){
            return 1;
        }

        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */