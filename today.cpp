#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // Original characters of the word "hello"
    vector<string> characters;
    characters.push_back("h");
    characters.push_back("e");
    characters.push_back("l");
    characters.push_back("l");
    characters.push_back("o");

    stack<string> charStack;

    // Push each character to stack to reverse the order
    for (int i = 0; i < characters.size(); i++) {
        charStack.push(characters[i]);
    }

    // Print top character from stack (should be last character of original word)
    cout << charStack.top() << endl;

    vector<string> reversedCharacters;

    // Pop from stack and store in reversedCharacters to reverse the original string
    for (int i = 0; i < characters.size(); i++) {
        reversedCharacters.push_back(charStack.top());
        charStack.pop();
    }

    // Print reversed string
    for (string ch : reversedCharacters) {
        cout << ch << " ";
    }
}