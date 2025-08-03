#include <iostream>
#include <unordered_map>
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

   Node * head = NULL;
   Node * current = NULL;
  
   //Assigning Values 
   for(int i = 0 ; i <5;i++){
      Node * temp = new Node(array[i]);
      if(head==NULL){
         head = temp;
         current = temp;
      }
      else{
         current->next = temp;
         current = current->next;
      }
   }
   //Loop Formation
   current->next= head;
 
   //Making Pointer to Tranverse
   Node * curr = head;

   //Using UnOrdered_Map to reduce space and time complexity
   unordered_map<Node * ,bool>visited;

   //Checks For Loop
   while(curr!=NULL){
      if(visited[curr]==1){
         cout<<"Loop Detected"<<endl;
         return 0 ;
      }
      visited[curr]=1;
      curr = curr->next;
   }
   
}