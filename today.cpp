#include <iostream>
using namespace std;

class Node {
public:
    int data;       
    Node* next;    


    Node(int value) {
        data = value;
        next = NULL;
    }
};


void print(Node* head) {
    Node* temp3 = head;
    while (temp3 != NULL) {
        cout << temp3->data << " "; 
        temp3 = temp3->next;         
    }
}

Node * arrayToLinkedList(int array [],int size){
    Node* head = NULL;
    Node* current = NULL;

    for (int i = 0; i < size; i++) {
        Node* temp = new Node(array[i]);  
        if (head == NULL) {
            head = temp;  
            current = temp;
        } else {
            current->next = temp; 
            current = current->next;
        }
    }

    return head;
}


int main() {

    int array1[] = {1, 2, 4};  
    int array2[] = {3,6,8,10};

   int size = sizeof(array1) / sizeof(array1[0]);
   Node * head1 = arrayToLinkedList(array1,size);

   size = sizeof(array2) / sizeof(array2[0]);
   Node* head2 = arrayToLinkedList(array2,size);
    

    Node * temp1 = head1;
    Node * temp2 = head2;

    Node * head3 = new Node (0);
    Node * temp3 = head3;

    while(temp1 && temp2){
      if(temp1->data<temp2->data){
          temp3->next = temp1;
          temp1 = temp1->next;
      }
      else{
          temp3->next = temp2;
          temp2 = temp2->next; 
      }
      temp3 = temp3->next; 
    }
    if (temp1 != NULL) {
        temp3->next = temp1;
    } else {
        temp3->next = temp2;
    }

    print(head3->next);


}
