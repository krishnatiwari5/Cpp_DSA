#include<iostream>
#include<cstring>
using namespace std;
bool mystrcmp(char str1[100], char str2[100]){
if(strlen(str1) != strlen(str2)) return false;
for(int i=0;str1[i] !='\0';i++){
    if(str1[i]!=str2[i])
   return false; 
}
return true;

}
int main(){
    cout<<"enter the strings to compare:- "<<endl;
    char name1[100],name2[100];
    cin>>name1>>name2;
    
if(mystrcmp(name1,name2)){
cout<<"strings are equal"<<endl;
}
else{
    cout<<"strings are not equal"<<endl;
}
return 0;
}