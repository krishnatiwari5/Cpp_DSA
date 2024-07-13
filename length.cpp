//in this proggrame we are going to calculate length of char array
#include<iostream>
using namespace std;
int length(char input[]){
    int count=0;
    
   for( int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[1000];
    cout<<"enter your name:-"<<endl;
    cin>>name;
    cout<<"length of your name is:- " <<length(name);
    return 0;
}