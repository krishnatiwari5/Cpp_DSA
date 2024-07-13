#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next= NULL;
    }
};

Node* takeInput() {
    int data ;
    Node* head = NULL;
    Node* tail = NULL;
    cin>>data;
    while(data!=-1) {
        Node* n = new Node(data);
        if(head==NULL){
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}


void print(Node* head) {
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
     temp =  temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* reversell(Node* head) {

if(head == NULL  || head->next ==NULL){
    return head;
}

    Node* prev = NULL;
    Node* curr = head;
    Node* nextn = NULL;
    while(curr!=NULL) {
    nextn = head->next;
        curr->next = prev;
        prev = curr;
        curr = nextn;
    }

    return prev;
}



int main() {
    Node* head = takeInput();
    reversell(head);
    print(head);
    return 0;
}