#include<bits/stdc++.h>
using namespace std;
void printnumber(int n){
if(n==0){
    return;
}
printnumber(n-1);
cout<<n<<"  ";
return;
}
int main(){
    int n;
    cout<<"enter the number to which you want to print"<<endl;
    cin>>n;
printnumber(n);//cin and cout is used for function which is returning something and not for void function
    return 0;
}