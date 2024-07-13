#include<bits/stdc++.h>
using namespace std;
void print(char a[]){
    if(a[0]=='\0'){
        return;
    }
    cout<<a[0]<<" ";
    print(a+1);
}

void revprint(char a[]){
    if(a[0]=='\0'){
        return;
    }
    cout<<a[0]<<" ";
    revprint(a+1);
}
int main(){
    return 0;
}