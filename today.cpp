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


//Function To Find the Middle of the LinkedList
Node * MiddleOfLinkedList(Node * head){
    int count = 0;
  Node * temp = head;
  while(temp){
    count++;
    temp = temp->next;
  }
  if(count%2==1){
    temp = head;
   count = (count/2)+1;
   while(count-1){
     count--;
     temp = temp->next;
   }
   return temp;
  }
  else{
    temp = head;
   count = (count/2)+1;
   while(count-1){
    count--;
     temp = temp->next;
   }
   return temp;
  }
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

//Function Callings
  temp = MiddleOfLinkedList(head);
//Printing its Middle Value and its Addresss
  cout<<"Value : "<<temp->data<<" Address : "<<temp<<endl;

}