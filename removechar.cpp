#include<bits/stdc++.h>
using namespace std;
void removechar(char a[]){
if(a[0]=='\0'){
    return;
}
if(a[0]!='a'){
     removechar(a+1);
}
else{
    for(int i=0;a[i]!='\0';i++){
        a[i]=a[i+1];
    }
    removechar(a);
}
}
int main(){
    char a[10];
    cin>>a;
    cout<<a<<endl;
    removechar(a);
    cout<<a<<endl;
    return 0;
}