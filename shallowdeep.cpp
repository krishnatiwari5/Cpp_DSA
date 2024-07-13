// in this proggrame we are going to learn about shallow copy and deep copy
// shallow copy means copying only address of zeroth index of array
// deep copy means copying entire array
#include <iostream>
#include<cstring>
using namespace std;
class student
{
    char *name;
    int age;

public:
    student(int age, char *name)
    {
        this->age = age;
        // this->name = name; --> shallow copy
       this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display()
    {
        cout << "name of student is :- " << name << endl;
        cout << "age of student is :- " << age << endl;
    }
};
int main()
{
    char name[] = "abcd";

    student s1(45, name);
    s1.display();
    name[3] = 'k';

    student s2(78,name);
  s2.display();
    s1.display();

    return 0;
}