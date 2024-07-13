//in this program we are going to convert string into integer by using recursion
// IMP--> char-char=int
#include<bits/stdc++.h>
using namespace std;
int length(char a[]){
    if(a[0]=='\0'){
        return 0;
    }
 return 1+ length(a+1);
}
int convertstring(char a[], int n){
    if(n==0){
        return 0;
    }
  int smallAns=convertstring(a,n-1);
   int lastdigit= a[n-1]-'0';
   return smallAns*10+lastdigit;
}
int main(){
    char a[50]="12345";

   cout<< length(a)<<endl;
   int n= length(a);
   int answer=convertstring(a,n);
  cout<< answer<<endl;
    return 0;
}