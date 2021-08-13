#include <iostream>
#include <vector>

using namespace std;

class Base1 {
protected:
    int x;
public:
    int getX() const {
        return x;
    }

    void setX(int x) {
        Base1::x = x;
    }

    void function() {
        cout << "x is " << getX() << endl;
    }
};

class Base2 {
protected:
    int y;
public:
    int getY() const {
        return y;
    }

    void setY(int y) {
        Base2::y = y;
    }

    void function() {
        cout << "y is " << getY() << endl;
    }
};

class Combination {
protected:
    Base1 base1;
    Base2 base2;
public:
    Combination(int x, int y) {
        base1.setX(x);
        base2.setY(y);
    }

    Base1 &getBase1() {
        return base1;
    }

    void setBase1(const Base1 &base1) {
        Combination::base1 = base1;
    }

    Base2 &getBase2() {
        return base2;
    }

    void setBase2(const Base2 &base2) {
        Combination::base2 = base2;
    }
};

int main() {
    Combination combination(1, 2);
    combination.getBase1().function();
    combination.getBase2().function();
    return 0;
}
