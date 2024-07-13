#include<iostream>
using namespace std;
int main(){
    int largest=INT_MIN;
    int smallest=INT_MAX;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"please assign the value of array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
   for(int i=0;i<n;i++){
       cout<<a[i]<<endl;
   }
   for(int i=0;i<n;i++){
       if(a[i]>largest){
           largest=a[i];
           
       }
       if(a[i]<smallest){
           smallest=a[i];
       }
   }
    cout<<"largest value is "<<largest<<endl;
    cout<<"smallest value is "<<smallest<<endl;
    return 0;
}