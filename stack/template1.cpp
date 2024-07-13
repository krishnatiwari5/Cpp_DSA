#include<iostream>
using namespace std;
template<typename T, typename V>

class Pair {

T x;
V y;

public: 

void setX(T x) {
    this-> x = x;
}

T getX() {
    return  x;
}

void setY(V y) {
    this->y = y;
}

V getY() {
    return y;
}

};


int main() {

// triplet using pair class

Pair<Pair<int, int>, int> p2;
Pair<int, int> p3;

p3.setX(3);
p3.setY(5);

p2.setX(p3);
p2.setY(7);

cout<<p2.getX().getX()<<endl<<p2.getX().getY()<<endl<<p2.getY()<<endl;




    return 0;
}