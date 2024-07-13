#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number :- "<<endl;
    cin>>num;
    int sum=0;
    int lastdigit;
    while (num>=0)
    {
        lastdigit=num%10;
       sum+=lastdigit;
       num=num/10;
    }
    cout<<sum<<endl;
    return 0;
}