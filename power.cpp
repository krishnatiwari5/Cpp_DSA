#include<bits/stdc++.h>
using namespace std;
//power using recursion
int power(int n, int p){
    if(p==0){
        return 1;
    }
    if(p==0){
        return n;
    }
    int small=power(n,p-1);
    return n*small;
}
int main(){
    int n,p;
    cout<<"enter the number :- ";
    cin>>n;
    cout<<"enter the power :- ";
    cin>>p;
    cout<<"your answer is :- "<<power(n,p)<<endl;
    return 0;
}