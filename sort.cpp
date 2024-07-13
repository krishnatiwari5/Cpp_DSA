#include<iostream>
using namespace std;
void sorting (int a[], int n){
    for(int i=0;i<=n-2;i++){
        int smallest=i;
    for(int j=i+1;j<=n-1;j++){
        if(a[j]<a[smallest]){
            smallest=j;
        }
    }
   
        swap(a[i],a[smallest]);
  
    }
}
int main(){
    int a[]={5,3,6,7,8,9,1,2};
    sorting(a,8);
    for(int j=0;j<8;j++){
cout<<a[j]<<"  ";
    }
    return 0;
}