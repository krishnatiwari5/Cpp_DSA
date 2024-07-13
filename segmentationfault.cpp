/*
segmentation fault or run time error occur in array when we try to access
memory location which is not ours 
for example:=
*/
#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<<a[100];
    return 0;
}