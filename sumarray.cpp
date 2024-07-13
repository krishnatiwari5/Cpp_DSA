#include<bits/stdc++.h>
using namespace std;
int arraysum(int arr[] , int n){
    //base case
    if(n==0){
        return 0;
    }
    return arr[0] + arraysum(arr+1,n-1);
}
int arraysum1(int arr[] , int n){
    //base case
    if(n==0){
        return 0;
    }
    return arr[n-1] + arraysum(arr, n-1);
}
int arraysum2(int a[], int n, int i){
    //base case
    if(i==n){
        return 0;
    }
    return a[i] + arraysum2(a, n, i+1);
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<"your sum of element is :- "<<arraysum(a,5)<<endl;
     cout<<"your sum of element is :- "<<arraysum1(a,5)<<endl;
      cout<<"your sum of element is :- "<<arraysum2(a,5,0)<<endl;
    return 0;
}