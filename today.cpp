#include <iostream>
#include <vector>
#include <algorithm>
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


//Function For Just Reversing the values of the Linkedlist
Node * ReverseLinkedListValues(Node * head){
  Node * temp = head;

 vector <int> store; 

  while(temp){
    store.push_back(temp->data);
    temp = temp->next;
  }

  temp = head;

  reverse(store.begin(),store.end());
   int i = 0;
   while(temp){
    temp->data = store[i++];
    temp = temp->next;
   }
   return head;
}


int main(){
  int array [] = {2,4,6,8};
  
  Node * head ;
  head = NULL;

//For Backward assigning of array to LinkedList [1,2,3,4...]
  head = BackwardLinkedlist(array,4,0);
   
//Printing Before the Reversing of LinkedList
   Node * temp = head;
  while(temp){
    cout<<" Value :"<<temp->data<<" Address :"<<temp<<endl;
    temp = temp->next;
  }
    cout<<endl;

//Reversing
  head = ReverseLinkedListValues(head);

//Reassiging head pointer to temp pointer , just to print
  temp = head;

  //Printing After the Reversing of LinkedList
  while(temp){
  cout<<" Value :"<<temp->data<<" Address :"<<temp<<endl;
    temp = temp->next;
  }

}