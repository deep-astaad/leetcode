class MyQueue {
public:
    int size=-1;
    stack<int> s1,s2;
    MyQueue() {
        size = 0;
    }
    
    void push(int x) {
        while(!s1.empty()){
            int t = s1.top();
            s2.push(t);
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            int t = s2.top();
            s1.push(t);
            s2.pop();
        }
        size++;
        
    }
    
    int pop() {
        int t = s1.top();
        s1.pop();
        size--;
        return t;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(size==0 || s1.size()==0){
            return true;
        }
        else{
            return false;
        }
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