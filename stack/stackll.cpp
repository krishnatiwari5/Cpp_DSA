#include<iostream>
#include<stack>
using namespace std;


class Node {
public:
int data;
Node* next ;
Node(int data ) {
    this->data = data ;
    next = NULL;
}

Node* takeInput() {
    Node* head=NULL;
    Node* tail=NULL;
    int data; 
    cin>>data;
    while(data!= -1) {
        Node* n = new Node(data);
        if(head==NULL) {
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

};

class stack {

      public:
    Node* head;
    int size;
  
    stack() {
        head = NULL;
        size = 0;
    }

    int getSize() {
return size;
    }

    bool isEmpty() {
return size==0;
    }
    void push(int ele) {
Node* n = new Node(ele);
        if(head == NULL) {
        head =n;
        }
n->next = head;
head = n;
size++;
    }
    void pop() {
if(head == NULL) {
    return;
} else {
    Node* temp = head;
  head = head->next;
  temp->next = NULL;
  delete temp;
  size--;
}
    }

    int top() {
if(head == NULL) {
    return 0;
} else {
    return head->data;
} 
    }
    };

void paranthesis() {
    stack<int> s;
    char a;
   int nextIndex = 0;
if(a == '(' || a== '[' || a == '{'){

    s.push(a);
    nextIndex++;
}
else if (a == ')' || a == '}' || a == ']') {

}
}


int main () {
    stack s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);

cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();


cout<<s.getSize()<<endl;
cout<<s.isEmpty()<<endl;


    return 0;
}
