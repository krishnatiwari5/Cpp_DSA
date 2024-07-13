// in this we are going to find equilibrium point
// equilibrium point is point in array where there are sum of elements present left side and right side should be same
#include<bits/stdc++.h>
using namespace std;

int equilibriumPoint(int a[], int n) {
  // e for equilibrium point 
  // l for first element of left side of e
  // r for right element of right side of e

  for(int e=0; e<n; e++) {
    int leftSum =0,rightSum =0;
for(int l=0; l<e; l++) {
  leftSum+=a[l];
}

for(int r=e+1; r<n ; r++) {
  rightSum+= a[r];
}

if(leftSum== rightSum) {
  return e+1; // this for 0th index system;
  // for 0th based index system return e;
}
  }

  return -1;
}


// optimized method (prefix sufix algorithm)
int equilibriumPoint2(int a[],int n) {
int p[n];
p[0] = a[0]; // true for everytime
// prefix sum 
for(int i=0; i<n; i++) {
  p[i] = p[i-1] + a[i];
}

for(int i=0; i<n; i++) {
  int leftsum=0, l=0, r=i-1;
  if(l<=r) {
    leftsum+=p[i];
    if(l>0) {
    leftsum -= p[l-1]; 
    // prefix sum of array from index (l, r)[l to r] is
    // p[r] = p[i]- p[l-1] 
  }
  }
  

  // rightsum
  int rightsum = 0;
  l = i+1;
  r=n-1;
   if(l<=r) {
    rightsum+=p[i];
    if(l>0) {
    rightsum -= p[l-1]; 
}


}
if(leftsum==rightsum) {
  return i+1;// 1 based index
  }
  
  
}
return -1;
}

int main() {

int n=7;
int a[n];
cout<<"Enter the elements of array"<<endl;
for(int i=0; i<n;i++) {
  cin>>a[i];
}
  cout<<"Your equilibrium point is at index "<<equilibriumPoint(a, n)<<endl;
return 0;
}