#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int>&s,int element){
    //base case
    if(s.empty()){
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();

    //recursive call
    insertAtbottom(s,element);
    s.push(num);
}

void reverseStack(stack<int>& stack){
    //base case
    if(stack.empty()){
        return;
    }

    int num=stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtbottom(stack,num);
}

/*

iterative approach 

void reverseStack(stack<int>& originalStack) {
    stack<int> auxiliaryStack;
    
    // Transfer elements from original stack to auxiliary stack
    while (!originalStack.empty()) {
        auxiliaryStack.push(originalStack.top());
        originalStack.pop();
    }
    
    originalStack = auxiliaryStack;
}

*/