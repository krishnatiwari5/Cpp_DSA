#include<iostream>
using namespace std;
class fraction{
    int numerator;
    int denominator;
    public:
    fraction(int numerator, int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void print(){
        cout<<"the fraction is :- "<<numerator<<"/"<<denominator<<endl;
    }
    fraction add(fraction const &f2){
       int  lcm=this->denominator*denominator;
int num=this->numerator*f2.denominator+this->denominator*f2.numerator;
int deno=lcm;
fraction f3(num,deno);
        return f3;
    }
};
int main(){
    return 0;
}