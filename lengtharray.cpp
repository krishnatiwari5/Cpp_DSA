#include<iostream>
using namespace std;
int length(char a[]){
    if(a[0]=='\0'){
        return 0;
    }
    return 1+length(a+1);
}
void replacechar(char a[]){
    if(a[0]=='\0'){
        return;
    }
    if(a[0]=='a'){
        a[0]='x';
    }
   
       replacechar(a+1);  
 
   
}
int main(){
  char a[10];
cin>>a;
cout<<length(a)<<endl;
cout<<a<<endl;
replacechar(a);
cout<<a<<endl;
return 0;
}