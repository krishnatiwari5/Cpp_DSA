//in this tutorial we are going to look some important inbuilt function of string or char array
/*
1.strlen()
2.strcmp()
3.strcpy()
4.strncpy()
5.strcat()
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char name[100];
    // char name1[100];
    // char name2[100];
    // cout<<"enter your name:-"<<endl;
    // cin>>name;
    //first function is "strlen(string name)" --> this is used to find length of string
    // cout<<"length of your name is:-"<<strlen(name)<<endl;
    //second function is "strcmp(string name1, string name2)" --> this is used to compare the two string
    // cout<<"enter the name of strings to compare:- "<<endl;
    // cout<<"1.:- "<<endl;
    // cin>>name1;
    // cout<<"2.:- "<<endl;
    // cin>>name2;
    // cout<<"result of comparision (0 means equal and non-zero number means different):- "<<strcmp(name1,name2)<<endl;
    
    //third function is "strcpy(destination string, source string)"--> this fuction is used to copy one string into another string
    // for example:=

//  char str1[100] = "jayshree";
//  char str2[100] = "krishna";
//     cout<<"string names before copying:- "<<str1<<" and "<<str2<<endl;
//     strcpy(str2,str1);// we copy the contain of str1 into str2, this fuction also copy null character '\0' .
//     cout<<"string names after copying:- "<<str1<<" and "<<str2<<endl;


//fourth function is "strncpy(destination string, source string, first n charcter)" this function is used to copy first n character of source to destination string, this function will not copy null character '\0' ;
// for example:-

// char name0[100]="hello";
// char name4[100]="world";
// cout<<"string names before copying:- "<<name0<<" and "<<name4<<endl;
// strncpy(name4,name0,2);
// cout<<"string names after copying:- "<<name0<<" and "<<name4<<endl;

//fifth function is "strcat(str1,str2)"--> this funtion is used to append or concatenate two strings
// for example:-
char name01[100]="hello";
char name40[100]="world";
cout<<"string names before copying:- "<<name01<<" and "<<name40<<endl;
strcat(name40,name01);
cout<<"string names after copying:- "<<name01<<" and "<<name40<<endl;

}