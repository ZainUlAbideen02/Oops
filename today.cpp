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