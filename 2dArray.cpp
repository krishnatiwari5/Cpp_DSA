//2d Array 

#include<iostream>
using namespace std;

int main() {
int n, m;
cout<<"Enter the number of rows and coloums "<<endl;
cin>>n>>m;
int a[n][m];
cout<<"Enter the Elements of 2D Matrix"<<endl;
for(int i = 0; i<n; i++) {
    for(int j=0; j<m; j++) {
        cin>>a[i][j];
    }
}

for(int i = 0; i<n; i++) {
    for(int j=0 ; j<m; j++) {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}