#include <iostream>
#include <string>
using namespace std;

void MaxLengthWords(string str, string &maxWord) {
    int prevCount = 0;
    int currCount = 0;
    string ans = "";

    for (int i = 0; i <= str.size(); i++) {
        if (str[i] != ' ' && i != str.size()) {
            maxWord += str[i];
            currCount++;
        } else {
            if (currCount > prevCount) {
                prevCount = currCount;
                ans = maxWord;
            }
            currCount = 0;
            maxWord = "";
        }
    }
    maxWord = ans;
}

int main() {
    string str = "Google Docs";
    string maxWord;
    MaxLengthWords(str, maxWord);

    cout << "Largest Word is: " << maxWord << endl;
    return 0;
}




