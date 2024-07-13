#include<iostream>
using namespace std;
int towerofhanoi(int n){
    if(n==0){
        return 0;
    }
    return towerofhanoi(n-1)+1+towerofhanoi(n-1);
}
int main() {
    cout<<towerofhanoi(5);
    return 0;
}