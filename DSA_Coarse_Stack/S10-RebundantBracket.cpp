#include <iostream>
#include <stack>
using namespace std;

bool hasRedundantBrackets(string expression) {
    stack <char> bracketStack;

    for(char c: expression) {
        if (c == ')') {
            if (bracketStack.top() == '(') {

                return true; //Redundant bracket pair found

            } 
            else
            {
                while (!bracketStack.empty() && bracketStack.top() != '(') {

                    bracketStack.pop();

                }
                bracketStack.pop(); //remove the opening bracket
            }

        } else {
            bracketStack.push(c);
        }
    }
    return false;
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    getline(cin, expression);

    if (hasRedundantBrackets(expression)) {
        cout << "Expression contains redundant brackets." << endl;
    } else {
        cout << "Expression does not contain redundant brackets." << endl;
    }

    return 0;
}