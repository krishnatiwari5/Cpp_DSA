// we are finding factorial using recursion
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
if(n==0) return 1;
    int smallans=factorial(n-1);

    return n*smallans;
}
//finding factorial without using recursion
int factorial2(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=i*fact;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter the number to find a factorial"<<endl;
    cin>>n;
int answer=factorial(n);
cout<<"your answer is :- "<<answer<<endl;

int a;
cout<<"enter the number to find a factorial"<<endl;
cin>>a;
int jawab=factorial2(a);
cout<<"your answer is :- "<<jawab<<endl;
    return 0;
}