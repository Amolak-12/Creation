#include <iostream>
using namespace std;

class Node{
public:
  //Ineger variable for storing data
    int data;
  //Poiner for poining the next node
   Node* next;

  //Constructor for making node
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};
int main() {

  //Making 1st node in heap memory having data = 10
  Node* one = new Node(10);
  //2nd Nodewith data = 20
  Node* two = new Node(20);
  //3rd Node with data = 30;
  Node* three = new Node(30);

  //Connecting all of them for making a Linked List
  one->next = two;
  two->next = three;

}