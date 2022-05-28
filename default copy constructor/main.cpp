#include <bits/stdc++.h>

namespace cod {
    class MyClass {
    private:
        int x;
    public:
        MyClass() = default;

        explicit MyClass(int paraX = 10) : x(paraX) {}

        ~MyClass() = default;

        friend std::ostream &operator<<(std::ostream &os, const MyClass &aClass) {
            os << "x: " << aClass.x;
            return os;
        }
    };
}

int main() {
    cod::MyClass myclass(10);
    std::cout << myclass << std::endl;
    cod::MyClass anotherclass(myclass);
    std::cout << anotherclass << std::endl;
}