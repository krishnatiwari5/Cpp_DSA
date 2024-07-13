#include<iostream>
using namespace std;

// creating Node 

class Node {
    public:
    int data;
    Node* next ;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

Node* takeInput2() {
 Node* head = NULL;
Node* tail = NULL;
int data;
cin>>data;
while(data != -1){

   Node* n = new Node(data);
    if(head == NULL) {
        head = n;
        tail = n;
    }
    else{
        n->next = head;
      head = n;    
    }
 
    cin>>data;
}
return head;
}



// Node* takeInput1() {
//  Node* head = NULL;
// Node* tail = NULL;
// int data;
// cin>>data;
// while(data != -1){

//    Node* n = new Node(data);
//     if(head == NULL) {
//         head = n;
//         tail = n;
//     }
//     else{
//         tail->next = n;
//       tail = tail->next;     // this is same as tail=n;
//     }
 
//     cin>>data;
// }
// return head;
// }


void print(Node* head) {
    Node* temp = head;
    while(temp!= NULL) {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}





int length(Node* head) {
   int  count = 0;
   while(head) {
       count ++;
       head = head -> next;
   }
   return count;
}

int main() {


    // Node *n1 = new Node(5);
    // Node *n2 = new Node(10);
    // Node *n3 = new Node(15);
    // Node *n4 = new Node(20);
    // Node *n5 = new Node(25);
    // Node *n6 = new Node(30);

    // Node* head = takeInput1();
    Node* head2 = takeInput2();
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    // n4->next = n5;
    // n5->next = n6;
   
   

   print(head2);
//    print(head);

//    cout<<"Length of Linked List is " <<length(head)<<endl;

    return 0;
}