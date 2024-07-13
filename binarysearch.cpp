//binary search is use for sorted aaray for finding key(any element in array);
// time complexcity = O(logn)
#include<bits/stdc++.h> //masterline header file
using namespace std;
int binarysearch(int a[], int n, int key){
    int s=0, e=n-1;
    while (s<=e)
    {
    //  int  mid=(s+e)/2;--> we are not using this because of chance of segmetation fault
    int mid=s+(e-s)/2;// this is proper way to write above statement
     if(a[mid]==key){
         return mid;
     }
else if (a[mid]>key){
    e=mid-1;
}
else{
  s=mid+1;
}
    }
   return 0; 
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
   int pok= binarysearch(a,n,key);
   if(pok==-1){
       cout<<"key is not found"<<endl;
   }
   else{
       cout<<"key is found at index "<<pok<<endl;
   }
    return 0;
}