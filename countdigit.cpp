#include<bits/stdc++.h>
using namespace std;
int numberofdigit(int num){
    int count=0;
    while(num>=0){
 num=num/10;
count++;
    }
    // cout<<count;
    return count;
}
int main(){
    // int n;

    // cout<<"enter the number :- ";
    // cin>>n;
 cout<< numberofdigit(1601);
    // cout<<"number of digit in number is :- "<<ans<<endl;
    return 0;
}