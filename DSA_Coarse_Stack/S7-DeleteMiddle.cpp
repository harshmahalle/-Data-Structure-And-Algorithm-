#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>& inputStack, int size) {
    int count = 0;
    int mid = size / 2;

    // Base case: If count reaches the middle index, remove the middle element
    if (count == mid) {
        inputStack.pop();
        return;
    }

    // Recursive call to reach the middle index
    int num = inputStack.top();
    inputStack.pop();
    
    deleteMiddle(inputStack, size - 1);
    inputStack.push(num);
}

int main() {
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
   
    int N = s.size(); // Get the size of the stack

    deleteMiddle(s, N);

    // Print the updated stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
