//in this proggrame we are going to make array revese
#include<iostream>
using namespace std;
int main(){
    int n;
int a[n];
cout<<"enter the no. of elements in the array "<<endl;
cin>>n;
cout<<"assign the value to that elements of array "<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"original array"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
int start=0;
int end=n-1;
while(start>=end){
    start++;
    end--;
    swap(a[start],a[end]);
}
cout<<"array after reverse "<<endl;
for(int i=0;i<n;i++ ){
    cout<<a[i]<<" ";
}
    return 0;
}