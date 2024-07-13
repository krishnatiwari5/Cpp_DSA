// stack using template
#include<iostream>
using namespace std;
template<typename T>

class Stack{
    T *arr;
    int nextIndex;
    int capacity;
    public : 
    
    Stack() {
        arr = new T[4];
        nextIndex = 0;
    }

void push(T ele) {
    if(nextIndex == capacity) {
        T* newArray = new T[2*capacity];
        for(int i=0; i<capacity;i++) {
            newArray[i]=arr[i];
        }
        delete []arr;
        arr = newArray;
        capacity = 2*capacity;
    }
    arr[nextIndex] = ele;
    nextIndex++;
}

void pop() {
    if(nextIndex<=0) {
        cout<<"Stack is empty"<<endl;
    }
    nextIndex--;
}

T top() {
    return arr[nextIndex-1];
}

bool isEmpty() {
    if(nextIndex == 0) {
        return true;
    }
    return false;
}

int size() {
    return nextIndex;
}


};

int main() {

    Stack<int> s; 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.pop();
    cout<<s.size()<<endl;

    cout<<s.top()<<endl;

    return 0;
}