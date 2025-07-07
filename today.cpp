#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * next;

  Node(int value){
    data = value;
    next = NULL;
  }

};

int main(){

int array [] = {2,3,4,5};

Node * head;

for(int i = 0;i <4 ;i++){
    if(head == NULL){
        head = new Node(array[i]);
    }
    else{
        Node * temp;
        temp = new Node(array[i]);
        temp->next = head;
        head = temp;
    }
}


}