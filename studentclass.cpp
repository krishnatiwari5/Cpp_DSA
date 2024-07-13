#include<iostream>
using namespace std;
class student{
    int age;
    public:
    int rollno;
    void setAge(int a){
        age=a;
    }
    int getAge(){
        return age;
    }
    void display(){
        cout<<"your age is "<<age<<endl;
        cout<<"your rollno is "<<rollno<<endl;
    }
};