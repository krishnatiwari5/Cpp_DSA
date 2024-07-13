#include<iostream>
using namespace std;

int main() {
    // char a[50];
    char b[50];
    cout<<"Enter Your Name :- ";
    // cin.getline(a, 50);
    // cin.getline(string name, length , delimiter) by default delimiter is new line charcter ('\n')

cin.getline(b, 50, 'w');
    cout<<b;
    return 0;
}