#include<iostream>
using namespace std;

class Node { 
    public:
    int data;
    Node *next;

    Node (int data) {
        this->data = data;
        next = NULL;
    }
};

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL){

  cout<<temp->data<<" ";
  temp = temp->next;

    }
}

Node* takeInput() {
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1) {
        cin>>data;
        Node *n = new Node(data); /* we are creating node dynamically because in stationary method the scope of node is in this function only not outside , so if next time loop will run it delete previous node and replace with new node , but in dynamically created node node is not going to delete without delete keyword */

if(head == NULL) {
    head = n;
    tail = n;

} else {
    
    tail->next = n;
    tail = n; // tail = tail->next;
}

cin>>data;

    }

    return head;
}






int main() {

Node *head = takeInput();

    print(head);
    
    return 0;
}

