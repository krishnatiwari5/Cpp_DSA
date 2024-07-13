#include<iostream>
using namespace std;

// in this case we assuming last index as pivot
int partition(int a[], int s, int e){
   int count=0;
for(int i=s;i<=e-1;i++){
    if(a[i]<a[e]){
        count++;
    }
}

int ans= s+count;
swap(a[e],a[ans]);

// left and right wala part sambhal lete hai
int i = s, j= e;

while (i< ans && j > ans) {

while(a[i] < a[ans]) {
    i++;

}

while ( a[j] > a[ans]) {

j--;
}

if(i< ans && j > ans) { 
    swap(a[i++], a[j--]);
}

}



return ans;
}
void quicksort(int a[], int s, int e){

    // base case
    if(s>=e){
        return;
    }

    // partition karege
    int p= partition(a,s,e);

    // left part sort karo
    quicksort(a, s, p-1);

    // right part sort karo
    quicksort(a, p+1, e);

}
int main(){
    int k[]={4,2,3,7,8,9,5};
    quicksort(k, 0, 6);

    for(int i=0;i<7;i++){
        cout<<k[i]<<"  ";
    }
    return 0;
}