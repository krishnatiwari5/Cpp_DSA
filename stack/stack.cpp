#include<iostream>
using namespace std;

class stack {
    int *arr;
    int nextIndex;
    int capacity;
public:
    stack() {
        capacity = 4;
        arr = new int[capacity];
nextIndex = 0;
    }

    stack(int cap){
capacity = cap;
arr = new int[cap];
nextIndex = 0;
    }

    void push(int ele) {
        if(nextIndex==capacity) {
            cout<<"stack fulled!"<<endl;
            return;
        }
       
     arr[nextIndex] = ele;
     nextIndex++;
    }

    void pop() {
        if(nextIndex == 0) {
            cout<<"Stack is Empty"<<endl;
            return;
        }
      nextIndex--;
    }

    int size() {
return nextIndex;
    }

    bool isEmpty() {
if(nextIndex==0 ){
 return true;   
}else {
    return false;
}

    }

int top() {
    if(isEmpty()) {
        cout<<"stack empty"<<endl;
        return -1;
    }
    return arr[nextIndex-1];
}
};


int main() {
    stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

s.pop();
s.pop();
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

    
  stack s2(10);
  for(int i=1;i<=10;i++){
    s2.push(i);
  }
  /// print content of stack
  while(!s2.isEmpty()){
    cout<<s2.top()<<endl;
    s2.pop();
  }
  cout<<s2.size()<<endl;
    return 0;
}