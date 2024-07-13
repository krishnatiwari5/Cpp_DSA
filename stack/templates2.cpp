#include<iostream>
using namespace std;

template<typename T, typename V, typename W>

class Triplet{
    T x;
    V y;
    W z;

    public:

    void setX(T x) {
        this->x = x;
    }
    T getX() {
        return x;
    }

    void setY(V y) {
        this->y = y;
    }

    V getY() {
        return y;
    }

    void setZ(W z){
        this->z = z;
    }

    W getZ() {
        return z;
    }

};

int main() {

Triplet<int, float, char> t1;
t1.setX(1);
t1.setY(2);
t1.setZ('k');

cout<<t1.getX()<<endl<<t1.getY()<<endl<<t1.getZ()<<endl;

    return 0;
}