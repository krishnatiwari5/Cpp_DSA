#include<iostream>
using namespace std;
int main() {

int a= 10;
int b= 20;
int temp;

// first method using variable temp

// temp=a ;
// a=b;
// b=temp;

// second method using bitwise operator xor


// a= a^b;
// b= a^b;
// a= a^b;


// By using inbuil in function swap

swap(a,b);
cout<<a<<" "<<b<<endl;



    return 0;
}