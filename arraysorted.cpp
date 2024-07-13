#include<bits/stdc++.h>
using namespace std;
bool arraysorted(int a[], int n){
    //base array
    if(n==0 || n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    int smallarraysorted=arraysorted(a+1, n-1);
    // if(smallarraysorted){
    //     return true;
    // }
    // else{
    //     false;
    // }

    return smallarraysorted;
}
int main(){
    int a[]={1,2,3,4,5};
    if(arraysorted(a,5)){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted "<<endl;
    }
    return 0;
}