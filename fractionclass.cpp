
#include<bits/stdc++.h>
using namespace std;

class Fraction {

int neu, deno;
public: 

Fraction(int neu, int deno) {
this->neu = neu;
this->deno = deno;
}

void print() {
    cout<<"Fraction is "<<neu<<"/"<<deno<<endl;
}

void add(Fraction const &f2) {
    int lcm = this->deno * f2.deno;
    this->neu = (this->neu*f2.deno) + (f2.neu*this->deno);

    this->deno = lcm;
    // simplify();
    // In build fuction = __gcd(int a, int b)
 int gcd =   __gcd(this->neu, this->deno);
      this->neu = this->neu/gcd;
   this->deno = this->deno/gcd;
}

void multiply(Fraction const &f2) {
    this->neu = this->neu*f2.neu;
    this->deno = this->deno*f2.deno;

    // simplify();
}
void simplify() {
   int gcd = 1;
  int j= min(this->neu, this->deno);
   for(int i=1;i<=j;i++) {
if(this->neu%i == 0 && this->deno%i == 0) {
    gcd = i;
}
   }
   this->neu = this->neu/gcd;
   this->deno = this->deno/gcd;
}

};


int main() {
    Fraction f1(5, 7);
    Fraction f2(3,7);
f1.print();
f2.print();
f1.add(f2);
cout<<"Addition of Two Fractions"<<endl;
f1.print();

cout<<"Multiply of Two Fractions"<<endl;
f1.multiply(f2);
f1.print();
    
    return 0;
}