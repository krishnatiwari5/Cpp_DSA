#include<bits/stdc++.h>
using namespace std;
// fibonaci series using recursion
int finonaciseries(int n ){
    if(n==0){         //base case
        return 0;
    }
    if(n==1){        //base case
        return 1;
    }
    int small1=finonaciseries(n-1);  //recursive class
    int small2=finonaciseries(n-2);//recursive class
    int answer=finonaciseries(n-1) + finonaciseries(n-2);//calculation
    return answer;

}



int main(){
int n;
cout<<"enter the index number"<<endl;
cin>>n;
cout<<"value at index "<<n<<" is "<<finonaciseries(n)<<endl;
    return 0;
}