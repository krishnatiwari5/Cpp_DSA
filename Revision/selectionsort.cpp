#include<iostream>
using namespace std;

// correct selection sort  , O(n^2)
void selectionsort (int a[], int n) {
    for(int i= 0; i<n-1; i++){
        int smallest = i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[smallest]){
                smallest = j;
            }
        }

        if(a[i]> a[smallest]){
            swap(a[i], a[smallest]);
        }
    }

}

//incorrect selcetion sort 

void selectionsortw (int a[], int  n){
    int smallest = INT_MAX;
for (int i= 0; i<n-1; i++){
    for(int j= i+1; j<n; j++){
        if(a[j]<smallest){
        smallest = a[j];

        }
    }
    if(a[i]>smallest){
        swap(a[i], smallest);
    }
}

}


int main()  {

int n;
int a[n];
cin>>n;

cout<<"Enter Your Array"<<endl;

for(int i=0 ; i<n; i++){
cin>>a[i];
}

selectionsort(a, n);
// selectionsortw(a, n);

cout<<"Your sorted Array is "<<endl;

for(int i=0 ; i<n ; i++){
    cout<<a[i]<<" ";
}

    return 0;
}