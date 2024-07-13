#include<iostream>
using namespace std;
// this is function which copy the contain of str2 into str1
void copystring(char str1[110],char str2[110]){
    for(int i=0;str2[i] != '\0';i++){
str1[i]=str2[i];

    }
    cout<<str1<<"  "<<str2<<endl;

}
int main(){
    char name1[100]="krishna";
    char name2[100]="jayshree";
    cout<<"names before copying are :- "<<name1<<"  "<<name2<<endl;
    
    cout<<"names after copying are :- ";
    copystring(name1,name2);
    return 0;
}