#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // Initial values in array (top of stack will be 8, then 1, 2, 3, 4)
    int inputArray[] = {4, 3, 2, 1, 8};

    stack<int> originalStack;

    // Push all elements of array into the stack
    for (int num : inputArray) {
        originalStack.push(num);
    }

    stack<int> tempStack;

    // Reverse the stack into a temporary stack
    while (!originalStack.empty()) {
        tempStack.push(originalStack.top());
        originalStack.pop();
    }

    int x = 2;  // Element to insert at the bottom

    // Push new element (x) at the bottom of the stack
    originalStack.push(x);

    // Restore the original elements above x
    while (!tempStack.empty()) {
        originalStack.push(tempStack.top());
        tempStack.pop();
    }

    // Print final stack from top to bottom
    while (!originalStack.empty()) {
        cout << originalStack.top() << " ";
        originalStack.pop();
    }

    return 0;
}