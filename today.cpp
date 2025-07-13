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

//Function for Deletion of first Node of Double LinkedList
Node * deleteFirstNode(Node * head ){
  Node * temp = head;
  head = head->next;
  head->prev = NULL;
  delete temp;
  return head;
}

//Function for Deletion of Last Node of Double LinkedList
Node * deleteLastNode(Node * head){
  Node * prev = NULL;
  Node * temp = head;

  while(temp->next){
    prev = temp;
    temp = temp->next;
  }

  prev->next = NULL;
  delete temp;
  return head;

}

int main(){

int array [] = {1,2,3,4,5};

//Making pointer to track and tranverse Linkedlist
Node * head = NULL;
Node * lastNode = NULL;

//Loop to Make and assign values to the Linkedlist
for(int i = 0 ; i < 5;i++){
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

//Printing The Doubled LinkedList before First Node deletion
while(current){
  cout<<current->data<<endl;
  current= current->next;
}
cout<<endl;

//Function calling for Last Node deletion
current = deleteLastNode(head);

//Printing The Doubled LinkedList After First Node deletion
while(current){
  cout<<current->data<<endl;
  current= current->next;
}

}