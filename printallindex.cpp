#include<bits/stdc++.h>
using namespace std;
void printallindex(int a[], int n, int i, int x){
    if(i==n){ 
        return;
    }
    if(a[i]==x){
        cout<<i<<endl;
    }
printallindex(a,n,i+1,x);
}
int main(){
    int a[]={2,7,5,2,2,3};
   printallindex(a,6,0,2);
    return 0;
}