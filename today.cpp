#include <iostream>
using namespace std;

// Single LinkedList Node definition
class Node{
  public:
  int data;       // Data stored in the node
  Node * next;    // Pointer to the next node

  // Constructor to initialize node with a value
  Node (int value){
     data = value;
     next = NULL;
  }
};

// Function to print the linked list
void print(Node * head){
    Node * temp3 = head;
    while(temp3 != NULL){
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

int main(){
   // Arrays representing two numbers (digits stored in reverse order)
   int array1 [] = {9,7,6,8,4};   // Represents number 48679
   int array2 [] = {6,4,3,8};     // Represents number 8346

   // Initialize pointers for first linked list
   Node * head1 = NULL;
   Node * current = NULL;
  
   // Length of array1
   int totallength = sizeof(array1) / sizeof(array1[0]);

   // Convert array1 to linked list
   for(int i = 0 ; i < totallength; i++){
      Node * temp = new Node(array1[i]);  // Create new node
      if(head1 == NULL){
         head1 = temp;        // First node becomes head
         current = temp;
      }
      else{
         current->next = temp;  // Append to list
         current = current->next;
      }
   }

   // Reuse current pointer for second list
   current = NULL;
   Node * head2 = NULL;

   // Length of array2
   totallength = sizeof(array2) / sizeof(array2[0]);

   // Convert array2 to linked list
   for(int i = 0 ; i < totallength; i++){
      Node * temp = new Node(array2[i]);  // Create new node
      if(head2 == NULL){
         head2 = temp;        // First node becomes head
         current = temp;
      }
      else{
         current->next = temp;  // Append to list
         current = current->next;
      }
   }
   
   // Reverse both linked lists to make addition easier (least significant digit first)
   Node * temp = head1;
   head1 = reverse(temp);
   temp = head2;
   head2 = reverse(temp);

   // Prepare for addition
   temp = head1;
   Node * temp2 = head2;
   Node * head3 = NULL;   // Head of the result list
   Node * curr = NULL;    // Pointer to track current node in result
   int carry = 0;         // Carry value for digit-wise addition

   // Add digits from both lists with carry
   while(temp != NULL || temp2 != NULL || carry > 0){
       int val1 = (temp != NULL) ? temp->data : 0;  // Value from first list or 0
       int val2 = (temp2 != NULL) ? temp2->data : 0;  // Value from second list or 0
       int sum = val1 + val2 + carry;  // Sum of values and carry
       carry = sum / 10;               // Update carry

       Node * newNode = new Node(sum % 10);  // Create node for current digit
       if(head3 == NULL){
           head3 = newNode;  // First digit
           curr = newNode;
       } else {
           curr->next = newNode;  // Append to result
           curr = curr->next;
       }

       // Move to next nodes if available
       if (temp != NULL) temp = temp->next;
       if (temp2 != NULL) temp2 = temp2->next;
   }

   // Reverse the result list to get final number
   Node * pr = head3;
   pr = reverse(pr);

   // Print the result
   print(pr);
}
