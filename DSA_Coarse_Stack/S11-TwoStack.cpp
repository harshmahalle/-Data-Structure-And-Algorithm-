#include <iostream>
using namespace std;

class TwoStack {
    int* arr;
    int size;
    int top1;
    int top2;

public:
    TwoStack(int maxSize) {
        size = maxSize;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int element) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void push2(int element) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int element = arr[top1];
            top1--;
            return element;
        } else {
            cout << "Stack 1 Underflow" << endl;
            return -1;
        }
    }

    int pop2() {
        if (top2 < size) {
            int element = arr[top2];
            top2++;
            return element;
        } else {
            cout << "Stack 2 Underflow" << endl;
            return -1;
        }
    }

    bool isEmpty1() {
        return (top1 == -1);
    }

    bool isEmpty2() {
        return (top2 == size);
    }
};

int main() {
    TwoStack stack(5);

    stack.push1(1);
    stack.push2(2);
    stack.push1(3);
    stack.push2(4);
    stack.push1(5);

    cout << "Popped from stack 1: " << stack.pop1() << endl;
    cout << "Popped from stack 2: " << stack.pop2() << endl;

    return 0;
}
