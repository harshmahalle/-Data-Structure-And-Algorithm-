#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &stack,int num){
    //base case
    if(stack.empty() ||(!stack.empty() && stack.top()<num)){
        stack.push(num);
        return; //imp condition
    }
    
    int n=stack.top();
    stack.pop();

    //recursive call
    sortedInsert(stack,num);

    stack.push(n);
    
}

void sortStack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }

    int num=stack.top();
    stack.pop();

    //recursive call

    sortStack(stack);

    sortedInsert(stack,num);
}

/*


iterative approach:
void sortStack(stack<int>& originalStack) {
    
    stack<int> sortedStack;
    
    while (!originalStack.empty()) {

        int temp = originalStack.top();
        originalStack.pop();
        
        while (!sortedStack.empty() && sortedStack.top() > temp) {
            originalStack.push(sortedStack.top());
            sortedStack.pop();
        }
        
        sortedStack.push(temp);
    }
    
    originalStack = sortedStack;
}


*/