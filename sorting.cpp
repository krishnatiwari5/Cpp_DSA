#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
   
    
    for(int i=0;i<=n-1;i++){
    int smallest=i;
        for(int j=i+1;j<=n-2;j++){
            if(a[j]<a[smallest]){
                smallest=j;
            }
            
               
            
        }
        if(a[i]>a[smallest]){
            swap(a[i],a[smallest]);
        }
         
    }

   
}
int main(){
     int n;
     int a[n];
    cout<<"please enter size of array :- "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    
selection_sort(a,n);


 for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}