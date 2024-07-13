#include<bits/stdc++.h>
using namespace std;
//multiply without recursion
int multiply1(int m, int n){
    int answer;
    for(int i=1;i<=n;i++){
         answer=m*i;
    }
    return answer;
}
//multiply by recursion
int multiply2(int m, int n){
    //base case
    if(n==0){
        return 0;
    }
    //recursive case
    int smallAns=multiply2(m, n-1);
    return smallAns+m;
}
int main(){
    int m,n;
    cout<<"enter your first number :- ";
    cin>>m;
    cout<<"enter your second number :- ";
    cin>>n;
    cout<<"your answer is :- "<< multiply1(m,n)<<endl;
    cout<<endl;
    cout<<"your answer is :- "<<multiply2(m, n)<<endl;
    return 0;
}