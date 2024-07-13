#include<iostream>
using namespace std;
int main(){
    char b[4]={'\0','a','b'}; //because every char array contain one null char'\0' which is blank
    for(int i=0;i<4;i++){
      cout<<b[i]<<" ";   
    }
   
    return 0;
}