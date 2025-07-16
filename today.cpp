#include <iostream>
using namespace std;

//Single LinkedList
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
  int array [] = {1,2,3,4,5};

  int count = 0 ;
  Node * head = NULL;
  Node * current = NULL;

     // Building circular singly linked list
  for (int i = 0; i < 5; i++) {
        Node* temp = new Node(array[i]);
        if (head == NULL) {
            head = temp;
            current = head;
        } else {
            current->next = temp;
            current = current->next;
        }
    }
       // Make it circular
    current->next = head;

   Node * temp = head;
   
   // Print 5 elements only (avoid infinite loop)
  for (int i = 0 ; i<5;i++){
     cout<<temp->data<<"  Address : "<<temp<<endl;
    temp = temp->next;
  }

  
  

}