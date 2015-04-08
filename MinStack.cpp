//Leetcode c++
//Min Stack 
/*
 Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
 
 push(x) -- Push element x onto stack.
 pop() -- Removes the element on top of the stack.
 top() -- Get the top element.
 getMin() -- Retrieve the minimum element in the stack.
*/
class MinStack {
public:
    void push(int x) {
        value.push(x);
        if(mins.empty() || mins.top()>= x){
            mins.push(x);
        }
    }
    void pop() {
        if(mins.top() == value.top())
            mins.pop();
        value.pop();
    }
    
    int top() {
        return value.top();
    }
    
    int getMin() {
        return mins.top();
    }
private:
    stack<int> value;
    stack<int> mins;
};