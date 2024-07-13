#include<bits/stdc++.h>
using namespace std;
int lastindex(int a[], int n, int i, int x){
    if(n==0){
        return 0;
    }
if(n==i){
    return -1;
}
if(a[i]==x){
    return i;
}
return lastindex (a,n,i-1,x);
}
// now we are going to solve same problem by using n instead of i
int lastindex2(int a[], int n, int x){
    if(n==0){
        return 0;
    }
    if(a[n-1]==x){
        return n-1;
    }
    return lastindex2(a, n-1,x );
}

int lastindex3(int a[], int n, int i, int x){
    if(i==n){
        return 0;
    }
    
    int smallArr =lastindex3(a,n,x,i+1);
    if(smallArr==0){
        if(a[i]==x){
        return i;
    }
    else{
        return 0;
    }
    }
    else{
        return smallArr;
    }

}
int main(){
 int   a[]={1,2,2,3,2,5};
    cout<<lastindex3(a,6,2,0);
    return 0;
}