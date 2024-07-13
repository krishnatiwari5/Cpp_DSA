#include<bits/stdc++.h>
using namespace std;
void count(int a[], int n, int i,int x, int &ans){
    if(i==n){
        return;
    }
    if(a[i]==x){
        ans++;
    }
    count(a, n, i+1, x, ans);
}
int count2(int a[], int n, int i, int x){
    if(i==n){
        return 0;
    }
    if(a[i]==x){
        return 1+ count2(a,n,i+1,x);
    }
    else{
        return 0+ count2(a,n,i+1,x);
    }
}
int main(){
    int a[]={5,5,3,1,2,5,4,5};
    int ans=0;
  cout<<count2(a,8,0,5); 
    // cout<<ans<<endl;
    return 0;
}