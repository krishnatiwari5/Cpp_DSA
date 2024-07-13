#include <bits/stdc++.h>
using namespace std;

// first solution
void sort012(int *arr, int n)
{
  int low=0, high=n-1, mid=0;
   while(mid<=high){
       if (arr[mid]==0){
           swap(arr[low], arr[mid]);
           mid++;
           low++;
       }
       else if (arr[mid]==1)
           mid++;
       else{
           swap(arr[mid], arr[high]);
           high--;
       }
   }
}


// Second solution

void sort012_2(int *a, int n)
{
   //   Write your code here
    int z = 0;
    int o = 0;
    int t = 0;
    for(int i=0; i<n; i++) {
        if(a[i] == 0) {
            z++;
        }
      else  if(a[i] == 1) {
            o++;
        }
        else if(a[i] == 2) {
            t++;
        }
    }
    for(int i=0; i<z; i++) {
        a[i] = 0;
    }
    for(int i=z; i<n-t; i++) {
        a[i] = 1;
    }
    for(int i = z+o; i<n; i++) {
        a[i] = 2;
    }
}

