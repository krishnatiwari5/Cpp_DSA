#include<iostream>
#include<cstring>
using namespace std;


int main(){
    // string length function := strlen(string)

    char a[] = "Krishna";
    int length = strlen(a);
    cout<<"Length of string is := "<<length<<endl;
    
    // string compare function := strcmp(string1, string2)

char b[] = "Tiwari";
if(a==b){
    cout<<"Two strings are equal"<<endl;
}
else {
    cout<<"Two strings are not equal"<<endl;
}

// copy string function := strcpy(destination string, source string)

char c[20];

strcpy(c,a);

cout<<"Value of c string is := "<<c<<endl;
   // copy n string fuction := strncpy , this function copy first n character of source string | syntax := strncpy(destination string, source string ,n)

char d[]= "namaste";
char e[10];

strncpy(e,d,3); 

cout<<"Value of String e is := "<<e<<endl;

// string concatenate fuction :- strcat(str1, str2) this function concatenate str2 with str1 end to end

strcat(a,b);


cout<<"Now the Value of string a is "<<a<<endl;

return 0;
}

