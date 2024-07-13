#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

Node* takeInput() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cin>>data;
    while(data!= -1){
        Node* n = new Node(data);
if(head == NULL){
  head = n;
tail = n;
}
else {
    tail->next = n;
    tail = n;
}
cin>>data;
    }
return head;
 
}

int lenght(Node* head) {

    int count = 0;
    while (head!=NULL) 
    {
        count++;
        head = head->next;
    }
    return count;
}

void nthnodefromlast (Node* head, int n) {
    int nfromfirst = lenght(head)-n+1;
    int count = 1;
    Node* temp = head;
    // while (count<nfromfirst)
    // {
    //    temp = temp->next;
    //    count++;
    // }
    if( n>lenght(head)) {
        return;
    }
    for(int i= 1; i<nfromfirst; i++) {
       temp= temp->next;
    }
cout<<temp->data<<endl;
return;
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
    Node* head = takeInput();
    // cout<<lenght(head)<<endl;
nthnodefromlast(head, 4);
    // print(head);
    return 0;
}