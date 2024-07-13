// dynamic queue using circular array

#include<iostream>
using namespace std;

template<typename T>
class Queue{
    int nextIndex;
    T firstIndex;
    int size;
    int capacity;
    T *arr;
    public:

    Queue() {
        capacity = 5;
        arr= new T[capacity];
        firstIndex=-1;
        size=0;
        nextIndex = 0;
    }


    bool isEmpty() {
        return size==0;
    }

 int getSize() {
        return size;
    }

    void push(int ele) {
        if(capacity == size) {
           T *newArray = new T[2*capacity];
           int j = 0;
           for(i=firstIndex;i<capacity;i++) {
            newArray[j] = arr[i];
           }
           for(int i=0;i<firstIndex;i++) {
            newArray[j] = arr[i]
           }
           firstIndex = 0;
           capacity = 2*capacity;
           delete []arr ;
           arr = newArray;
        }
        arr[nextIndex] = ele;
        nextIndex = (nextIndex + 1)%capacity;
        size++;
        if(firstIndex == -1) {
            firstIndex = 0;
        }
    }

   void pop(){
          if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
          }
          firstIndex = (firstIndex + 1)%capacity;
          size--;
          if(size==0){
            /// reset -> optional
            nextIndex = 0;
            firstIndex = -1;
          }
}
T front() {
    if(isEmpty()) {
        cout<<"Queue is Empty"<<endl;
        return 0;
    }
    return arr[firstIndex];
}
};

int main() {
    Queue<int> q;
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);
 q.push(60);
 q.push(70);
 cout<<q.front()<<endl;
 q.pop();
 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getSize()<<endl;
 cout<<q.isEmpty()<<endl;
 q.push(60);
 q.push(70);

 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getSize()<<endl;
    return 0;
}