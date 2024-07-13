#include<iostream>
using namespace std;

int main(){

int a[5] = {2,5,4,3,1};

int s= 0;
int e= 4;

cout<<"Original Array :- ";
for(int i=0 ; i<5; i++) {
    cout<<a[i]<<" ";
}

while ( !(s > e)) // while (s<=e) same condition but written in different way
{
    swap(a[s], a[e]);
    s++;
    e--;
   
}

cout<<endl;



cout<<"Reverse Array :- ";
for(int i=0; i<5; i++) {
    cout<<a[i]<<" ";
}

    return 0;
}