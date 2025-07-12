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


//Function to insert a Node at nth Position in Double LinkedList
Node * insertionAtNthPosition(Node * head,int position,int value){
  if(head==NULL){
    return head;
  }
  if(position <=0){
    return head;
  }

  Node * current = head;
  Node * prev = NULL;

  for(int i = 0  ; i < position-1;i++){
     prev = head;
     current = current->next;
  }

  Node * temp = new Node (value);
  prev->next  = temp;
  temp->prev=prev;
  temp->next = current;
  current->prev=temp;

  return head;
  
}


int main(){

int array [] = {1,3,4,5};

//Making pointer to track and tranverse Linkedlist
Node * head = NULL;
Node * lastNode = NULL;

//Loop to Make and assign values to the Linkedlist
for(int i = 0 ; i < 4;i++){
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
Node * current = head;

//Printing The Doubled LinkedList before insertion at nth Position
while(current){
  cout<<current->data<<endl;
  current= current->next;
}

//Creating new Pointer to catch Address of head after function call
Node * temp = NULL;
temp = insertionAtNthPosition(head,2,2);
current = temp;

//Printing The Doubled LinkedList After the insertion at nth Position
while(current){
  cout<<current->data<<endl;
  current= current->next;
}

}


