// in this we going to implement Dynamic stack using dynamic array

#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int nextIndex;
    int capacity;

    public:

    Stack() {
        arr = new int[4];
        nextIndex = 0;
    }

    void push(int ele) {
if(nextIndex == capacity) {
    int *newArray = new int[2*capacity];  // code to make array size dynamic
    for(int i=0; i<capacity; i++) {
        newArray[i] = arr[i];
    }
    delete []arr; // syntax for deleting an array
    arr = newArray;
    capacity = 2*capacity;
}

  arr[nextIndex] = ele;
  nextIndex++; 

    }

void pop() {
    if(nextIndex<=0) {
        cout<<"Stack is Empty"<<endl;
        return;
    }

    nextIndex--;
}

int top() {
    if(nextIndex == 0) {
        cout<<"Stack is Empty"<<endl;
    }

    return arr[nextIndex - 1];
}

int size() {
    return nextIndex;
}

bool isEmpty() {
    if(nextIndex == 0) {
        return true;
    }
    false;
}



};


int main() {
    
Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
cout<<s.size()<<endl;

    
     return 0;
     
     }