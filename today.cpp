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

//Adding Node at nth Position
void nthPositionAdding(Node * head,int position,int value){

  Node * temp;
  temp = NULL;
  
  for(int i = 0 ; i <position-1;i++){
    temp = head;
    head = head->next;
  }
 
  Node * temp2 = new Node(value);
  temp2->next = temp->next;
  temp->next = temp2;

}

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

//For Backward of array
  head = BackwardLinkedlist(array,4,0);
   
//For Forward of array
 // head = ForwardLinkedList(array,4,0,NULL);

//Making copy of head to use
  Node * current = head;

//printing before nth Position Adding
cout<<"Printing after nth Position"<<endl;
 while(current!=NULL){
    cout<<current->data<<endl;
    current = current->next;
  }

//Adding Node at nth Position
  nthPositionAdding(head,5,10);

//printing after nth Position Adding
  cout<<"Printing after nth Position"<<endl;

//Again Reassigning the head pointer
current = head;
 while(current!=NULL){
    cout<<current->data<<endl;
    current = current->next;
  }
}