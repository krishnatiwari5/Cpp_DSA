#include<iostream>
using namespace std;

// bubble sort algorithm , O(n^2);

void bubblesort (int a[], int n){
for(int count=0; count<n-2; count++){
    for(int i=0; i<n-1; i++){
if(a[i]>a[i+1]){
    swap(a[i], a[i+1]);
}
    }
}
}

// optimise bubble sort , O(n);

void optimisebubblesort (int a[], int n){
for(int count=0; count<n-2; count++){
    int flag = 0;
    for(int i=0; i<n-1; i++){

if(a[i]>a[i+1]){
    swap(a[i], a[i+1]);
    int flag = 1;
}
    }

if(flag == 0){
    break;
}

}
}


int main(){

int n;
int a[n];
cout<<"Enter the length of array "<<endl;
cin>>n;

cout<<"Enter the array element "<<endl;

for(int i=0; i<n; i++){
    cin>>a[i];
}

bubblesort(a, n);

cout<<"Your sorted array is "<<endl;
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}

    return 0;
}