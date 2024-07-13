#include<iostream>
#include<cstring>
using namespace std;
void print (char str[100]){
    int e;
    for(int e=strlen(str)-1;e>=0;e--){
        for(int s=e;s>=0;s--){
          cout<<  str[s];
        }
        cout<<endl;
    }
}
int main(){
    char name[100]="tiwari";
    print(name);
    return 0;
}