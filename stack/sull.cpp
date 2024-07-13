// implement Stack using LinkList

#include<iostream>
using namespace std;

template<typename T>
class Node{

public :
T data;
Node<T> *next;
Node(T data) {
    this->data = data;
    next= NULL;
}

};


template<typename T>
class Stack {
    Node<T> *head;
    int size;

    public:
    Stack() {
        head = NULL;
        size = 0;
    }

    void push(T ele) {

        Node<T> *n = new Node<T>(ele);
         
       n->next = head;
        head = n;

        size++;
    }

    bool isEmpty() {
        if(size==0) {
            return true;
        }
        return false;
    }

    
    void pop() {

        if(isEmpty()) {
            cout<<"Stack is Empty"<<endl;
            return;
        }

        Node<T> *temp = head;
        head=head->next;
        temp->next = NULL;
        delete temp;
        size--;

    }


    int getSize() {
        return size;
    }

    T top() {
        if(isEmpty()) {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return head->data;
    }
};




int main(){
  Stack<int> s;
  s.push(100);
  s.push(101);
  s.push(102);
  s.push(103);
  s.push(104);

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
