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

int main(){

  int array [] = {2,3,4,5};
 Node * head;
 head = NULL;
  
 Node * tail;
 tail = NULL;
//Backward Adding
  for(int i = 0;i<4;i++){
 if(head==NULL){
  head = new Node(array[i]);
  tail = head;
 }
else{
  Node * temp = new Node(array[i]);
  tail->next=temp;
  tail= temp;
}
}
//To Print
while(head){
cout<<head->data<<endl;
head= head->next;
}
}