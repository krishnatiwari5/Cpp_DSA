#include<iostream>
using namespace std;

class fraction{
int neumirator;
int denominator;

public:
fraction(int neumirator, int denominator){
    this->neumirator=neumirator;
    this->denominator=denominator;
}
void print(){
    cout<<"the fraction is "<<neumirator<<"/"<<denominator;
}
void add(fraction f2){
 int lcm=this->denominator*f2.denominator;
int ansnume=(this->neumirator*f2.denominator + f2.neumirator*this->denominator);
int ansdeno=lcm;
// here we not going to make new variable to store addition answer rather we update our value of f1 object
this->neumirator=ansnume;
this->denominator=ansdeno;
  
 }
  
};
int main() {
    fraction f1(14,5);
    fraction f2(40,6);
    f1.print();
    cout<<"\n";
   f2.print();
   cout<<"\n";
    f1.add(f2);
    cout<<" the answer of addition of two fraction is :-"<<endl;
    f1.print();
    return 0;
}