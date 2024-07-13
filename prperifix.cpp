#include<iostream>
using namespace std;
void print(char str[100]){
for(int e=0;str[e] !='\0';e++){
    for(int s=0;s<=e;s++){
       cout<< str[s];
    }
    cout<<endl;
}
}
int main(){
    char name[100]="krishnakumar";
   print(name);
    return 0;
}