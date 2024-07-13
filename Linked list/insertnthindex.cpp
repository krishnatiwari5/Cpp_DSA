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
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;

    while(data!= -1) {

Node* n = new Node(data);

        if(head == NULL){
            head=n;
            tail=n;
        } else{
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
   return head; 
}

void print(Node* head) {
    Node* temp = head;
    while (head!= NULL)
    {
        cout<<head->data<<" -> ";
        head = head->next;
    }
 cout<<"NULL"<<endl;   
}

int length (Node* head) {
    int count = 0;
    while (head!= NULL)
    {
     count++;
     head=head->next;
    }
    return count;
}

void printithNode(Node* head , int i) {
  /*  int n = length(head);
    if(i<0 || i>n-1 ){
        cout<<"-1";
        return;
    }
    else {
        for(int j=0; j<i; j++){
            head = head->next;
        }

        cout<<head->data<<endl;
    } */

    // withour using length function 
int count =0;
    if(i<0) {
        cout<<"-1"<<endl;
        return;
    }
    else {
        while(count<i && head){
            head = head->next;
            count++;
        } 
        if(head){

        cout<<head->data<<endl;
        }else {
            cout<<"-1";
        }
    }
}


int main () {
    Node* head = takeInput();
    print(head);
    printithNode(head, 2);
    return 0;
}

