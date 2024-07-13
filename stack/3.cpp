#include<iostream>
using namespace std;

int sumOfNumbers(int n) {
 
    // base case
    if(n == 0) {
      return 0;
    
    }
   // calculation or logic 
  return n + sumOfNumbers(n-1); // Trust your function or Recursive Case
  
}

int main() {
   cout<< sumOfNumbers(5) ;
    return 0;
}