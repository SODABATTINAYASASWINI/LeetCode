class MyStack {
public:
    vector<int>A;
    MyStack() {
       
    }
    
    void push(int x) {
        A.push_back(x);
    }
    
    int pop() {
        if(A.empty()){
            return -1;
        }
        else{
        int y=A.back();
        A.pop_back();
        return y;
        }
    }
    
    int top() {
        if(A.empty()){
            return -1;
        }
        else{
        int y=A.back();
        return y;
        }
    }
    
    bool empty() {
        return A.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */