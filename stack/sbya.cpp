// in this we are going to implement stack using array

#include<iostream>
using namespace std;

class Stack{
int*arr;
int nextIndex;
int capacity;

public:

Stack() {
    arr = new int[5];
    nextIndex =0;
}

Stack(int cap) {
    capacity = cap;
    arr = new int[cap];
    nextIndex = 0;
}

bool isEmpty() {
if(nextIndex == 0) {
    return true;
}
return false;
}

void push(int ele) {

if(nextIndex==capacity) {
    cout<<"Stack is full"<<endl;
    return;
}
 
 else {
   arr[nextIndex] = ele;
    nextIndex++; 
 }
    
}


void pop() {
    if(nextIndex <= 0) {
        return;
    }
    nextIndex--;
}

int size() {
    return nextIndex;
}

int top() {
    return arr[nextIndex - 1];
}

};


int main() {

Stack s(6);
s.push(19);
s.push(3);
s.push(5);
s.push(8);

cout<<s.size()<<endl;

cout<<s.top()<<endl;
s.pop();


s.pop();
cout<<s.top()<<endl;

s.pop();
cout<<s.top()<<endl;


s.push(23);
cout<<s.top()<<endl;
s.push(62);
cout<<s.top()<<endl;
s.push(56);
cout<<s.top()<<endl;

cout<<s.size()<<endl;

cout<<s.isEmpty()<<endl;





    return 0;
}