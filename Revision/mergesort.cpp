// merge sort is Recursive sorting algorithm;
#include <iostream>
using namespace std;

int partion(int a[], int s , int e, int n ){
   int p=0;
   for(int i=0; i<=e; i++)
   if (a[e]>a[i]){
       p++;
   }
return p;
}

int main () {
    int a[5] = {4,2,7,3,5};
 cout<<partion(a, 0, 4, 5);
    return 0;
}