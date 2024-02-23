#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
     stack<char> parenthesesStack;

     for(char c:s) {
         if(c== '(' || c== '{' || c=='[') {
            parenthesesStack.push(c);
         } 
         else if (!parenthesesStack.empty() &&
          ((c==')' && parenthesesStack.top() =='(') ||
          (c=='}' && parenthesesStack.top() =='{') ||
          (c==']' && parenthesesStack.top() =='['))) {
               parenthesesStack.pop();
           }
           else {
            return false;
           }
     }
     return parenthesesStack.empty(); // for handling odd and cases such as (( ,]]]]
}

int main() {
    string input;
    cout << "Enter a string containing parentheses: ";
    cin >> input;

    if (isValid(input)) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}