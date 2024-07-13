#include<iostream>
#include<cstring>
using namespace std;
void concatenate(char name1[100], char name2[100]){
    int n=strlen(name1);
    int m=strlen(name2);
    for(int i=0;i<=m;i++){
        name1[i+n]=name2[i];
    }
}
int main(){
    char name1[100]="krishna";
    char name2[100]="kumar";
    cout<<"two names are 1."<<name1<<" and 2."<<name2<<endl;
    cout<<"after append the first name become:- ";
    concatenate(name1,name2);

    cout<<name1;
    return 0;
}