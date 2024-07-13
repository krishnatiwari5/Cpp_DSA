#include<iostream>
using namespace std;
int main(){
    int a[5];
    int largest=a[0];
    int smallest=a[0];
    cout<<"please assign the value to array elements"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    for(int i=0;i<5;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"largest value is "<<largest<<endl;
    cout<<"smallest value is "<<smallest<<endl;
    
    return 0;
}