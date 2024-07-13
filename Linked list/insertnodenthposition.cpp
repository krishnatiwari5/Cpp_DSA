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

int length(Node* head) {
    int count =0;
    while(head) {
        count++;
      head=  head->next;
    } 
    return count;
}

Node* insertAtithPositon(Node* head, int data , int position) {
if(position < 0 || position > length(head)){
    return 0;
}
else {
    for(int i = 0;i<position; i++ ){
       head= head->next;
    }

   Node* n = new Node(data);
   head->next = n;
   n->next = n;
   
}
return head;
}


//Insert node at nth index

Node* insertnthposition(Node* head, int i , int data) {
    if(i<0) {
        cout<<-1<<endl;
        return head;
    } 
    if(i==0) {
        Node* n = new Node(data);
        n->next = head;
        head = n;
        return head;
    } 
       Node* copyHead = head;
        int count = 1;
        while (count<=i-1)
        {
           head= head->next;
           count++;
        }
        if(head){
          Node* n = new Node(data);
        n->next = head->next;
        head->next = n;
        return copyHead;    
        }
       
       return copyHead;
    
}

Node* deleteithnode(Node* head, int i) {
    if(i<0) {
        return head;
    }

    if(i==0 && head!=NULL) {
Node* newHead = head->next;
head->next = NULL;
delete head;
      return head->next;
   
    }
int count =1;
    while (count<=i-1)
    {
        head = head->next;
        count++;
    }
Node* ithhead = head->next;
if(head && ithhead){
  head->next = ithhead->next;
ithhead->next =NULL;
delete ithhead;
    return head;  
}else {
    cout<<"Invalid Index"<<endl;
}
return head;
}

void printnthposition(Node* head, int i){
    // int n= length(head);
    
    if(i<0) {
        cout<<"-1"<<endl;
    return;
    }
    else {
       int count = 1;
       while(count<=i && head){
           head = head->next;
           count++;
       }
       if(head){

       cout<<"Element present at index "<<i<<" is "<<head->data<<endl;
       }else {
           cout<<-1;
       }
    }
}

bool isPresent(Node* head, int data){
    Node* curr = head;
    while(curr!=NULL) {
        if(curr->data == data) {
            return true;
        }
        curr = curr->next;
    }
    return false;
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
//    insertnthposition(head, 2, 100);
// int i ;
// cout<<"enter the index number of which element you want to delete "<<endl;
int data;
cout<<"enter the number "<<endl;
cin>>data;
if(isPresent(head, data)){
    cout<<"number is present "<<endl;
}
else {
    cout<<"number is not present "<<endl;
}

// cin>>i;
// deleteithnode(head, i);
    // print(head);

    return 0;
}