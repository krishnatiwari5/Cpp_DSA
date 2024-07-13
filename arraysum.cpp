#include<iostream>
using namespace std;
int main(){
    
    int b[4]={5,4,8,1};
    int sum=0;
    
    for(int i=0;i<4;i++){
       sum= sum + b[i];
       
    }
    cout<<sum<<endl;
    return 0;
}