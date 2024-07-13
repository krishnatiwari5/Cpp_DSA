#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    complex(int real, int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void print(){
        
        cout<<"the complex number is :- "<<real<<" + "<<imaginary<<"i"<< endl;
    }
    void add(complex c){
        int addreal=this->real+c.real;
        int addimginary=this->imaginary+c.imaginary;
        cout<<"the addition of two complex numbers is :- "<<addreal<<" + "<<addimginary<<"i"<< endl;
    }
    void multiply(complex c){
int mulreal=this->real*c.real-this->imaginary*c.imaginary;
int mulimg=this->real*c.imaginary+this->imaginary*c.real;
cout<<"the multiplication of two complex numbers is :- "<<mulreal<<" + "<<mulimg<<"i"<< endl;
    }
};
int main(){
    complex c1(5,3);
    complex c2(9,5);
    c1.add(c2);
    c1.multiply(c2);
    
    return 0;
}