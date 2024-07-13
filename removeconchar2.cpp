#include<bits/stdc++.h>
using namespace std;
void remconchar(char a[]){
if(a[0]=='\0'){
    return;
}
if(a[0]!=a[1]){
  remconchar(a+1);
}
else{
    for(int i=0;a[i]!='\0';i++){
        a[i]=a[i+1];
    }
    remconchar(a);
}
}
int main(){
   char a[20];
   cin>>a;
   cout<<a<<endl;
remconchar(a);
cout<<a<<endl;
    return 0;
}