#include<bits/stdc++.h>
using namespace std;
int palindrome(int a[], int n, int s, int e){
    if(s>e){
        return true;//empty array is palidrome because in array s<e always
    }
    if(a[s]==a[e]){
        return true;
    }
    return palindrome(a,n,s+1,e-1);

}

bool palindrome2(int a[],int s,int e){
    if(s>e){
        return true; //empty array is always palindrome
    }
    if(a[s]==a[e]){
        return palindrome2(a,s+1,e-1);
    }
    else{
        return false;
    }
}
int main(){
    int a[]={1,2,3,4,3,2,1};
  palindrome2(a,0,6);
 if(palindrome2(a,0,6)==1){
     cout<<"number is palidrome"<<endl;
 }
 else {
     cout<<"number is not palidrome"<<endl;

 }
    
    return 0;
}