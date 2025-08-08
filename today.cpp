#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Input array
    int array [] = {8,6,4,7,4,9,10,8,12};
    stack<int> store; // stack to store indices
    int size = sizeof(array) / sizeof(array[0]);

    int array1[size]; 
    fill(array1, array1 + size, -1); // initialize result array with -1

    store.push(0); // push index 0 as starting point

    // Loop through array (till second last element)
    for(int i = 0; i < size - 1; i++) {
        // While stack not empty and current next element is greater
        while (!store.empty() && array[store.top()] < array[i+1]) {
            array1[store.top()] = array[i+1]; // assign next greater
            store.pop(); // remove index since it's resolved
        }
        // push the index of the next element
        store.push(i+1);
    }

    // Print the results
    for(int i : array1) {
        cout << i << " ";
    }
}
