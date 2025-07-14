#include <iostream>
using namespace std;

//Double Linkedlist
class Node{
  public:
  int data;
  Node * prev;
  Node * next;

  Node (int value){
     data = value;
     next = NULL;
     prev = NULL;
  }
};

//Function to remove duplicate values
Node* removeDuplicate(Node* head) {
    if (head == NULL) return NULL;

    int array[1000];
    int count = 0;

    Node* temp = head;
    while (temp != NULL) {
        array[count++] = temp->data;
        temp = temp->next;
    }

    int newarray[1000];
    int n = 0;

    for (int i = 0; i < count; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < n; j++) {
            if (array[i] == newarray[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            newarray[n++] = array[i];
        }
    }

    // Rewrite values in existing nodes
    temp = head;
    int i = 0;
    while (i < n && temp != NULL) {
        temp->data = newarray[i++];
        temp = temp->next;
    }

    // Delete remaining extra duplicate nodes
    Node* current = temp;
    Node* prevNode = (temp != NULL) ? temp->prev : NULL;

    while (current != NULL) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    if (prevNode != NULL)
        prevNode->next = NULL;

    return head;
}

int main(){

int array [] = {1,2,4,3,1,3,2,3,4,5,5,3,2};

//Making pointer to track and tranverse Linkedlist
Node * head = NULL;
Node * lastNode = NULL;

//Loop to Make and assign values to the Linkedlist
for(int i = 0 ; i < 13;i++){
  //Creating Head
  if(head==NULL){
    head = new Node(array[i]); 
    lastNode = head;
  }
  //Creating Nodes next to the head such as tail
  else{
    Node * temp = new Node (array[i]);
    lastNode->next=temp;
    temp->prev=lastNode;
    lastNode = temp;
  }
}

//Making a new pointer to tranverse the Linkedlist and print it out
Node *  current = head;

//Printing The Doubled LinkedList before duplication removal
while(current){
  cout<<current->data<<endl;
  current= current->next;
}
cout<<endl;

//Function Call
current = removeDuplicate(head);

//Printing The Doubled LinkedList after duplication removal
while(current){
  cout<<current->data<<endl;
  current= current->next;
}
}