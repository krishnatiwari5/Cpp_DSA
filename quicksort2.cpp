#include<iostream>
using namespace std;

int partition(int a[], int s, int e) {
int pivot = a[s];
int i = s;
int j = e;
while(i<j) {
    while(i<=e && a[i] <= pivot) i++;
    while( j>= s && a[j] > pivot) j--;

    if(i<j) swap(a[i], a[j]);
}
swap(a[s], a[j]);
return j;

}

void quicksort(int a[], int s, int e) {
if(s<e) {
    int p = partition(a,s,e);
    quicksort(a, s, p-1);
    quicksort(a, p+1, e);
}
}

int main() {
    int a[]= {4,2,3,8,1};
    quicksort(a, 0, 4);
    for(int i=0; i<5;i++) {
        cout<<a[i]<<"  ";
    }
    return 0;
}