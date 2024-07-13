#include<iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char input[]){
    int start=0;
    int end= length(input)-1;
    while(start<end){
        swap(input[start],input[end]);
        start++;
        end--;
    }

}
int main(){
    char name[100];
    cout<<"enter your name:-"<<endl;
cin>>name;
cout<<"length of your name is:-"<<length(name)<<endl;
cout<<"your original name is:-"<<name<<endl;
reverse(name);
cout<<"your reversed name is:-"<<name<<endl;
    return 0;
}