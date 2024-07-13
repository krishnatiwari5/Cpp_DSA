#include<iostream>
using namespace std;
template<typename T>

class Pair{

T x;
T y;

public :

void setX(T x) {
    this-> x = x;
    // this-> x jo hota hai wo apne function ka x nahi hota hai, wo class ka variable hota hai
}

T getX() {
    return x;
}

void setY(T y) {
    this->y = y;
}

T getY() {
    return y;
}



};

int main() {
    Pair<int> p1;
    p1.setX(1);
    p1.setY(2);

    cout<<p1.getX()<<"   "<<p1.getY()<<endl;

    Pair<char> p2;
    p2.setX('k');
    p2.setY('t');

    cout<<p2.getX()<<"    "<<p2.getY()<<endl;



}