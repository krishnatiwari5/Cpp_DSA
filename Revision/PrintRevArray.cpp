#include<iostream>
using namespace std;
int main(){ 


    int a[5] = {1,41,5,8,6};

    cout<<"Normal Array  :- ";
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
cout<<endl;
    cout<<"Reverse Array   :- ";
    for(int i=4; i>=0; i--){
        cout<<a[i]<<" ";
    }
    return 0;
}