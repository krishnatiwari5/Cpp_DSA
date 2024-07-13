#include<bits/stdc++.h>
using namespace std;
void saveindex(int a[], int n, int i, int x, vector<int> &v){
    if(i==n){
        return;
    }
    if(a[i]==x){
        v.push_back(i);
    }
    saveindex(a,n,i+1,x,v);
}
int saveindex2(int a[], int n, int x, int i, int output[], int j){
    if(i==n){
        return 0;

    }
    if(a[i]==x){
        output[j]=i;
        return 1+saveindex2(a,n,x,i,output,j+1);
    }
     return 0+saveindex2(a,n,x,i,output,j+1);
}
int main(){
    int a[]={2,5,6,2,2,2,7,6,5,2};
    vector<int> v;
    saveindex(a,10,0,2,v);


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    return 0;
}