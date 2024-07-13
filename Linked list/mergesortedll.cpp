#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* takeInput() {
Node* head = NULL;
Node* tail = NULL;
int data;
cin>>data;
while(data!=-1){
    Node* n = new Node(data);
    if(head == NULL) {
        head = n;
        tail = n;
    }
    else {
        tail->next = n;
        tail= n;
    }
    cin>>data;
}
return head;
}

Node* mergesortedll(Node* head1, Node* head2) {

    Node* newHead = NULL;
while (head1!=NULL || head2!= NULL) 
{
 if(head1->data < head2->data) {
newHead->data = head1->data;
head1 = head1->next;
newHead = newHead->next;
 } else {
     newHead->data = head2->data;
     head2 = head2->next;
     newHead = newHead->next;
 }
}

return newHead->next;

}

void print (Node* head) {
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {

    Node* head1 = takeInput();
    Node* head2 = takeInput();

    mergesortedll(head1, head2);

    print(mergesortedll(head1, head2));

    return 0;
}