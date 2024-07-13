#include<iostream>
using namespace std;


// Given an array, check whether the array is in sorted order with recursion

// using iteration
void sortArray(int a[], int n) {
    for(int i=0; i<n ; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                swap(a[i], a[j]);
        }
    }

}

}
// using recursion 

void sortArray2(int a[], int n, int i=0) {
    if(i==n-1) {
        return;
    }

    if(a[i] > a[i+1]) {
        swap(a[i], a[i+1]);
    }

    sortArray2(a, n, i+1);
}



int main() {

int a [] = {48,10,9,7,8};

sortArray2(a, 5);
for(int i=0; i<5; i++) {
    cout<<a[i]<<"  ";
}


    return 0;
}