#include <iostream>
#include <vector>
using namespace std;

// Minimum add to make the parentheses valid
int main() {
    vector<string> vec;

    vec.push_back("(");
    vec.push_back(")");
    vec.push_back(")");
    vec.push_back("(");
    vec.push_back("(");
    vec.push_back(")");
    vec.push_back(")");
    vec.push_back("(");
    vec.push_back("(");
    vec.push_back(")");
    vec.push_back("(");
    vec.push_back("(");
    vec.push_back("(");
    vec.push_back("(");

    int open = 0;        // Count of unmatched '('
    int insertions = 0;  // Count of unmatched ')'

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == "(") {
            open++;
        } else if (vec[i] == ")") {
            if (open > 0) {
                open--;  // matched with an open '('
            } else {
                insertions++;  // unmatched ')', needs '('
            }
        } else {
            cout << "Invalid character at position " << i + 1 << endl;
        }
    }

    // Total needed = unmatched '(' + unmatched ')'
    int total = insertions + open;

    cout << "Minimum parentheses to add to make it valid: " << total << endl;

    return 0;
}