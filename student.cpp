// here we are using isolation of logic which is very important invention in software industry
#include<iostream>
#include"studentclass.cpp"
using namespace std;
int main(){
    student s1;// crating object statically
    student *s2= new student;// creating object dynmically
    s1.setAge(50);
    s1.getAge();
    s1.display();
    cout<<endl;
    s2->setAge(30);
    (*s2).getAge();
    s2->display();
    return 0;
}