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

int array [] = {2,4,6,8,10};

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
Node * current = head;

//Printing The Doubled LinkedList
while(current){
  cout<<current->data<<" Previous : "<<current->prev<<" Next : "<<current->next<<endl;
  current= current->next;
}


}


