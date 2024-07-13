#include<iostream>
using namespace std;
int countways(int n){
  // base case
if(n==0 || n==1){
    return 1;
}
if(n==2){
    return 2;
}
return countways(n-1)+countways(n-2)+countways(n-3);  
}

int main (){
    cout<<countways(3);
    return 0;
}