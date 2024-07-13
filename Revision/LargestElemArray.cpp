#include<iostream>
using namespace std;
int main(){

int a[10] = {50,14,30,67,25,99,500,10,255,223};

int LargestElement = INT_MIN;

for(int i= 0; i<10; i++){

if(a[i]> LargestElement){
    LargestElement = a[i];
}

}

cout<<"Largest Element of array is "<<LargestElement<<endl;
    return 0;
}