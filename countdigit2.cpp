#include<bits/stdc++.h>
using namespace std;
int count(int num){
//base case
if(num==0){
    return 0;
}
int smallAns=count(num/10);//recursive class
return smallAns+1;//calculation
}
int main(){
    int n;
    cout<<"enter your number :- "<<endl;
    cin>>n;
cout<<"your answer is :- "<<count(n);
    return 0;
}