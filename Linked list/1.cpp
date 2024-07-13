#include<iostream>
using namespace std;

int main( ) {
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for(int i=0; i<2*n; i++){
        if(i<=n){

       
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        for(int k=0; k<i; k++ ){
            cout<<"* ";
        }
      
        }
        else if(i>n) {
            for(int p = 0; p<i-n; p++){
                cout<<" ";
            }
            for(int o =2*n -i;o>0; o--){
                cout<<"* ";
            }
        }
          cout<<endl; 
    }
            return 0;
}