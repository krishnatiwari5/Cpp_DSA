#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char alpha[] = "abcd";
    for(int j=0; j<strlen(alpha);j++){
      for(int i=0;i<=j;i++){
        cout<<alpha[i];
    }
     cout<<endl;
    }
    
    return 0;
}