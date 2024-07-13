#include<iostream>
using namespace std;

int main()  {

char name[50];
cout<<"Please Enter your Name :- ";
cin>>name;

int length = 0;

for(int i=0; name[i]!='\0'; i++){
    length++;
}

cout<<"Length of Your Name is :- "<<length;
    return 0;
}