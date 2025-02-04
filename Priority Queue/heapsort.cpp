// inplace heap sort

#include<iostream>
using namespace std;

void inplaceHeapSort(int * input, int n) {
    /// Build the heap in input array

    for(int i=1; i<n ; i++) {
        int cI= i;
        while(cI > 0) {
            int pI = (cI-1)/2;
            if(input[cI] < input[pI]) {
                swap(input[cI], input[pI]);
                cI = pI;
            } else {
                break;
            }
        }
    }
 /// Remove min function n times

int size = n;

while(size>=1) {
swap(input[0], input[size-1]);
size --; /// element is removed

/// Down Heapify

int pi = 0;
while(true) {
    int lci = 2*pi + 1;
    int rci = 2*pi + 2;
    int mini = pi;

    if(lci < size && input[lci] < input[mini]) {
        mini = lci;
    }

    if(rci < size && input[rci] < input[mini]) {
        mini = rci;
    }

    if(mini == pi) {
        break;
    }

    swap(input[pi], input[mini]);
    pi = mini;
}

}
}

int main() {

int input[] = {5, 1, 2, 0, 8};
inplaceHeapSort(input, 5);

for(int i=0; i<5; i++) {
    cout<<input[i]<<" ";
}

    return 0;
}