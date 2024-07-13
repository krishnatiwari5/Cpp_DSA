#include<iostream>
using namespace std;
template<typename T>
class Node {

    public: 
    T data;
    Node* next;

    Node(int data) {
        this data-> data;
        next = NULL;
    }

};

template<typename T>
class Queue {
    Node<T>* head;
    int size;
    Node<T>* tail;

    public:

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size==0;
    }

    void push(T ele) {
         Node<T> *n = new Node<T>(ele);
         if(head=NULL) {
            head = n;
            tail = n;
        }
        else {
       
        tail->next = n;
        tail=n;
        }
        size++;
    } 

    void pop() {
        if(isEmpty()) {
            cout<<"Queue is Empty"<<endl;
        } 
       Node<T>* temp = head;
        head= head->next;
        temp->next = NULL; // isolation step
        delete temp;
        size--;

    }

    T front() {
         if(isEmpty()) {
            cout<<"Queue is Empty"<<endl;
            return 0;
        } 
        return head->data;
    }
};