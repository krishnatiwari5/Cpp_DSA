// linersearch is used for unsorted array for searchin key(any element present in array)
//time complexcity = O(n)
#include<bits/stdc++.h>
using namespace std;
int linersearch(int arr[],int n, int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
       
         return i;
     
    }
  
       
       
    }
 return -1;
 }

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key which you want to find"<<endl;
    cin>>key;
int pok=linersearch(arr,n,key);
if(pok==-1){
    cout<<"key is not present"<<endl;
}
else{cout<<"your key is present at index "<<pok<<endl;}

    return 0;
}