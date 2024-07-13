#include<bits/stdc++.h>
using namespace std;
int firstelement(int a[], int n, int i, int x){
    if(n==0){
        return 0;
    }
    if(i==n){
        return -1;
    }
    if(a[i]==n){
return i;
    }
    return firstelement(a,n,i+1,x);
}
int main(){
  int  a[]={2,2,3,4,5,3,2};
    
        cout<<"your first index of number at :- "<<firstelement(a,7, 0,3)<<endl;

        
  
    return 0;
}