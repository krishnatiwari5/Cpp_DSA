#include<iostream>
using namespace std;



int main() {
    int a[50][50]; // 2d array or matrix | in 2d array given row valur is optional but given column value  in medatory
   int row, col;
   cout<<"Enter The value of raw and coloumn"<<endl;
   cin>>row>>col;
   // taking input rowwise
   for(int i=0; i<row; i++){
for(int j=0; j<col; j++){
    cin>>a[i][j];
}

   }


for(int i= 0; i<row; i++){
for(int j=0; j<col; j++){
    cout<<a[i][j]<<" ";
}
cout<<endl;
}

    return 0;
}
