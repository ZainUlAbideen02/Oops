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

//Backward adding
Node * BackwardLinkedlist(int array [],int size,int index){
  //Base Case
  if(index==size){
    return NULL;
  }
  Node * temp = new Node (array[index]);
  temp->next=BackwardLinkedlist(array,size,index+1);
  return temp;
}

//Forward Adding

Node * ForwardLinkedList(int array[],int size,int index,Node* prev){
  //Base Case
  if(size==index){
    return prev;
  }
  Node * temp = new Node(array[index]);
  temp->next=prev;
  return ForwardLinkedList(array,size,index+1,temp);
}


int main(){
  int array [] = {2,4,6,8};
  
  Node * head ;
  head = NULL;

//For Backward
 // head = BackwardLinkedlist(array,4,0);
   
//For Forward
  head = ForwardLinkedList(array,4,0,NULL);
  
//printing
  while(head!=NULL){
    cout<<head->data<<endl;
    head = head->next;
  }

}