#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * next;

  Node (int value){
     data = value;
     next = NULL;
  }
};


//Deleting the First Node by pointers of LinkedList
Node * deleteFirstNode(Node * head){
  if(head!=NULL){
    Node * temp = head;
    head = head->next;
    delete temp;
  }
  return head;
}

//Backward adding using Recursion [1,2,3,4,...]
Node * BackwardLinkedlist(int array [],int size,int index){
  //Base Case
  if(index==size){
    return NULL;
  }
  Node * temp = new Node (array[index]);
  temp->next=BackwardLinkedlist(array,size,index+1);
  return temp;
}

int main(){
  int array [] = {2,4,6,8};
  
  Node * head ;
  head = NULL;

//For Backward of array
  head = BackwardLinkedlist(array,4,0);
   
  Node * temp = head;
  //Printing Before the First Node deletion
  while(temp){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
  cout<<endl;
  //Calling the Function and Receiving back into same pointer
  head = deleteFirstNode(head);
  
  //Printing After the First Node deletion
  temp = head ;
  while(temp){
    cout<<temp->data<<endl;
    temp = temp->next;
  }

}