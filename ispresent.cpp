#include<bits/stdc++.h>
using namespace std;
bool ispresent(int a[], int n, int x){
    //base case
    if(n==0){
        return 0;
    }
    if(a[0]==x){
        return true;
    }
 bool smallAns=ispresent(a+1,n-1,x);
    return smallAns;
}
bool ispresent2(int a[], int n , int x){
    if(n==0){
        return 0;
    }
    bool smallAns=ispresent(a+1, n-1,x);
if(smallAns){
return true;
}
if(a[0]==x){
    return true;
}
else{
    return false;
}
}
bool ispresent3(int a[], int n,int x, int i){
    if(n==0){
        return 0;
    }
    if(a[i]==x){
        return true;
    }
    return ispresent(a,n,i+1);
}
bool ispresent4(int a[], int n, int x){
    if(n==0){
        return 0;
    }
    if(a[n-1]==x){
        return true;
    }
    return ispresent4(a,n-1,x);
}

bool ispresent5 (int a[], int n, int x, int i){
    if(n==0){
        return 0;
    }
    if(i==n){
        return false;
    }
    if(a[i]==x){
        return true;
    }
    // i=n-1;
    return ispresent5(a,n,x,i-1);
}

int main(){
 int a[]={1,2,3,4,5};
 int x=3;
 if(ispresent2(a,5,x)){
     cout<<"your element is present "<<endl;
 }
 else{
     cout<<"your element is not present "<<endl;
 }
    return 0;
}