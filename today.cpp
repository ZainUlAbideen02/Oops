#include <iostream>
using namespace std;

// Single LinkedList Node definition
class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize node with a value
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to print the linked list
void print(Node* head) {
    Node* temp3 = head;
    while (temp3 != NULL) {
        cout << temp3->data << " ";  // Print current node's data
        temp3 = temp3->next;         // Move to the next node
    }
}

// Function to reverse a linked list
Node* reverse(Node* head) {
    Node* prev = NULL;     // Previous node pointer (initially null)
    Node* curr = head;     // Current node pointer
    Node* next = NULL;     // Next node pointer

    // Traverse the list and reverse the links
    while (curr != NULL) {
        next = curr->next;    // Store next node
        curr->next = prev;    // Reverse current node's link
        prev = curr;          // Move prev to current node
        curr = next;          // Move to next node
    }

    return prev;  // New head of the reversed list
}

// Function to get the last node of a linked list
Node* lastnode(Node* head) {
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;  // Traverse to last node
    }
    return temp;
}

// Function to reverse a sublist between start and end indices
Node* ngroups(Node* head, int start, int end) {
    Node* first = NULL;
    Node* sec = head;

    // Traverse to the 'start' position
    while (start--) {
        first = sec;       // one node before the reversal segment
        sec = sec->next;   // node at 'start' position
    }

    Node* third = NULL;
    Node* fourth = head;

    // Traverse to the 'end' position
    while (end--) {
        third = fourth;    // node at 'end' position
        fourth = fourth->next;  // node just after the reversal segment
    }

    // Disconnect sublist to reverse
    first->next = NULL;
    third->next = NULL;

    // Reverse the sublist between 'start' and 'end'
    sec = reverse(sec);        // 'sec' is now the new head of reversed sublist
    third = lastnode(sec);     // Get the new last node of reversed sublist

    // Reconnect the reversed sublist back to the list
    first->next = sec;         // Connect first part to reversed sublist
    third->next = fourth;      // Connect reversed sublist to remaining list

    return head;  // Return updated head (unchanged in this hardcoded example)
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Array to convert to linked list

    Node* head = NULL;
    Node* current = NULL;

    int totallength = sizeof(array) / sizeof(array[0]);

    // Convert array to linked list
    for (int i = 0; i < totallength; i++) {
        Node* temp = new Node(array[i]);  // Create new node
        if (head == NULL) {
            head = temp;        // First node becomes head
            current = temp;
        } else {
            current->next = temp;  // Append to list
            current = current->next;
        }
    }

    Node* temp = head;

    // Reverse nodes from position 4 to 8 (hardcoded)
    temp = ngroups(temp, 4, 8);

    // Print updated list
    print(temp);
}
