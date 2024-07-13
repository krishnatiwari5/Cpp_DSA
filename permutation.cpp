#include<bits/stdc++.h>
using namespace std;
void printpermutation(char str[], int i){
    //base case
    if(str[i]=='\0'){
        cout<<str<<endl;
    }
    for(int j=i;str[j]!='\0';j++){
        swap(str[i],str[j]);
        printpermutation(str, i+1);
        swap(str[i],str[j]);
    }
}
int main(){
    char str[]="ABC";
    printpermutation(str, 0);
    return 0;
}