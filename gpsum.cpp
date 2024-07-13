#include<bits/stdc++.h>
using namespace std;
// sum of gp using recursion
double sumgp(int k){   // here k is power of a number
    //base case
    if(k==0){
        return 1;
    }
    double smallAns= sumgp(k-1);
    return smallAns + 1.0/pow(2,k);
}

// without recursion
double gsum( int k){
   double sum=0;
    for(int i=0;i<=k;i++){
sum+=1.0/pow(2,i);
    }
return sum;
}
int main(){
    int n=3;
    cout<<sumgp(n);
    cout<<endl;
    cout<<gsum(3);
    return 0;
}