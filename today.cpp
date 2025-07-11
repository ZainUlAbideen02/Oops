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

//Rotating The LinkedList by nth Position 
Node * RotateLinkedListbyNthPosition(Node * head,int position){
   if (head == NULL) return NULL;
   if (position == 0) return head;
   int count = 0;
   Node * temp = NULL;
    temp = head;

    while(temp){
      temp = temp->next;
      count++;
    }

    position = position % count;
    Node * prev = NULL;
    Node * current = head;
    for (int i = 1 ; i <=count-position;i++){
        prev = current;
        current = current->next;
    }
     prev->next = NULL;
     Node * last = current;

     while(last->next!=NULL){
      last = last->next;
     }
     last->next = head;
     head = current;
     return head;
}


int main(){
  int array [] = {2,4,6,8,9,10};
  
  Node * head ;
  head = NULL;

//For Backward assigning of array to LinkedList [1,2,3,4...]
  head = BackwardLinkedlist(array,6,0);
   
//Printing Before the Finding of the Middle of the LinkedList
   Node * temp = head;
  while(temp){
    cout<<" Value :"<<temp->data<<" Address :"<<temp<<endl;
    temp = temp->next;
  }
    cout<<endl;

//nth Postion by which LinkedList is to Rotate e.g ; 3
    int position = 3;

//Function Calling
   temp = RotateLinkedListbyNthPosition(head,position);

//Printing After the Linkedlist is Rotated by nth Position
   while(temp){
    cout<<" Value :"<<temp->data<<" Address :"<<temp<<endl;
    temp = temp->next;
  }


}