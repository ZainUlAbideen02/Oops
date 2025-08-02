#include <iostream>
#include<vector>
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

bool check(vector<Node *>visited,Node * curr){
   for(int i = 0 ; i<visited.size();i++ ){
      if(visited[i]==curr){
         return 1;
      }
   }
   return 0 ;
}

int main(){
   int array [] = {1,2,3,4,5};
   Node * head = NULL;
   Node * current = NULL;

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

   current->next= head;

   Node * curr = head;
   vector <Node *> visited;

   while(curr!=NULL){
      if(check(visited,curr)){
        cout << "Cycle detected!" << endl;
         return 0;
      }
      visited.push_back(curr);
      curr = curr->next;
   }
   


   // Node* temp = head;
   // if(temp != NULL){
   //    do {
   //       cout << temp->data << endl;
   //       temp = temp->next;
   //    } while(temp != head);
   // }



}




  

