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

  head = BackwardLinkedlist(array,4,0);
 
  //printing
  while(head!=NULL){
    cout<<head->data<<endl;
    head = head->next;
  }

}