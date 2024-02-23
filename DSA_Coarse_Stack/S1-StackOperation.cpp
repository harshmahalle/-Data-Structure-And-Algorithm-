#include<iostream>
#include<stack>
using namespace std;

class Stack {
    // Properties

    public:
        int size;
        stack<int>st;

    // Constructer

    Stack(int size) {
        this->size = size;
    }

    // Behaviour

    void push(int element) {
        if(st.size() < size) {
            st.push(element);
        }
        else {
            cout<< "Stack is full (overflow)" << endl;
        }
    }

    void pop() {
        if (!st.empty()) {
            st.pop();
        }
        else {
            cout<< "Stack is Empty (underflow)" << endl;
        }
    }

    int peek(){
        if(!st.empty()) {
            return st.top();
        }
        else {
            cout<< "Stack is empty" << endl;
            return -1;
        }
    }

     bool isEmpty() {
        return st.empty();
    }

    bool isFull() {
        return (st.size()== size);
    }
};

int main() {
    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6); // Trying to push more elements than the stack size

    cout << "Stack peek: " << stack.peek() << endl;
    
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop more elements than the stack contains

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}