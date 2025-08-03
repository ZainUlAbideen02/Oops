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

//To Print the LinkedList
void print(Node * head){
    Node * temp3 = head;
   while(temp3!=NULL){
      cout<<temp3->data<<" ";
      temp3 = temp3->next;
   }
}


int main(){
   //Array , Whose Values is in LinkedList
   int array [] = {1,2,3,4,5,6,7,8,9,10};

   //Making Pointer to Point & Tranverse the Linkedlist
   Node * head = NULL;
   Node * current = NULL;
  
   //Counting the Total Length of the array
   int totallength = sizeof(array) / sizeof(array[0]);

   //Assigning Values 
   for(int i = 0 ; i <totallength;i++){

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
   //Pointer to point to the Node Where Loop is to create 
   //Suppose We Create Loop at 3rd Position
   Node * temp = head;
   for(int i = 0 ; i < 3;i++){
      temp=temp->next;
   }
   current->next=temp;

    //Going to Use Floyd’s Cycle Detection Algorithm to detect the loop.
      Node * slow = head;
      Node * fast = head;

   //To Count the Length Of the Loop
      int looplen = 1;

    while(slow!=NULL){
      
      //Moving slow pointer one step and fast two steps ahead
      slow = slow->next;
      fast = fast->next->next;
      
      //If Loops Found,They become equal to each other
     if(slow==fast){
      cout<<"Loop Present"<<endl;
      fast = fast->next;
      //Calculating the length of the Loop
       while (fast!=slow)
       {
           looplen++;
         fast=fast->next;
       }
       cout<<"The Length Of the Loop is "<<looplen<<endl;
       
       //Founding the index of Loop starting Node
       int newlength = totallength-looplen;
       cout<<"The Loop Present at Node No."<<newlength<<endl;

       //Pointing the Pointer at the Loop Starter Node
       Node * temp = head;
       for(int i = 0 ;i<newlength;i++){
         temp = temp->next;
       }
        
       //Breaking the Loop 
       while(fast->next!=temp || fast!=temp){
         if(fast->next==temp){
            fast->next=NULL;
            cout<<"Loop Breaks"<<endl;
            //Print the LinkedList After breaking the Loop
            print(head);
            return 0;
         }
         fast=fast->next;
       }

     }
     //If Loop is not present
     if(fast==NULL || fast->next==NULL ){
      cout<<"No Loop Present"<<endl;
      return 0;
     }

   }

   }