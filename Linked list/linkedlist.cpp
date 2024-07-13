#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node *next;

Node(int data) {
    this->data = data;
    next = NULL;
}


};

int main() {

//stationary

Node n1(1);
Node n2(2);

n1.next = &n2;

cout<<n1.data<<" "<<n2.data<<endl;

Node *head = &n1;

cout<<head->data<<endl;


//dynamically

Node *n3 = new Node(3);
Node *n4 = new Node(4);

n3->next = n4;

cout<<n3->data<<" "<<n4->data<<endl;

    return 0;
}