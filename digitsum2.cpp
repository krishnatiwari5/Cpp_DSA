#include<bits/stdc++.h>
using namespace std;
//we solving these problem using recursion
int sum(int num){
    //base case;
    if(num==0){
        return 0;
    }
    //recursive case
    int lastdigit=num%10;
    int smallAns=sum(num/10);
    //calculation
    return smallAns+lastdigit;
}
int main(){
    int n;
    cout<<"enter your number :- "<<endl;
    cin>>n;
    cout<<"sum of digit of your number is :- "<< sum(n)<<endl;
    return 0;
}