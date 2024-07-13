#include<iostream>
using namespace std;

int length(char a[]){
    int count = 0;

for(int i=0; a[i] != '\0'; i++ ){
    count++;
}

    return count;
}

void reverse(char a[]){
    int s = 0;
    int e = length(a) - 1;

    while( s<=e){
        swap(a[s], a[e]);
        s++;
        e--;
    }
}

int main() {
char a[] = "KrishnaTiwari";

reverse(a);

cout<<a;

return 0;
}