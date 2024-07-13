#include<bits/stdc++.h>
using namespace std;
int countzero(int num){
 
    //base case
    if(num==0){
        return 0;
    }
    //recursive case
    int lastdigit=num%10;
    int smallaAns=countzero(num/10);
    //calculation
    if(lastdigit==0){
        return smallaAns+1;
    }
    else{
        return smallaAns;
    }
}
int main(){
    int n;
    cout<<"enter your number :- ";
    cin>>n;
    cout<<countzero(n);
    return 0;
}