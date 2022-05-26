#include <iostream>

class SimpleClass {
private:
    const int constValue;
public:
    //!
    //! \param paraConstValue parameter for constant value
    explicit SimpleClass(int paraConstValue) : constValue(paraConstValue) {}

    friend std::ostream &operator<<(std::ostream &os, const SimpleClass &aClass) {
        os << "constValue: " << aClass.constValue;
        return os;
    }
};

int main() {
    SimpleClass simpleClass(25);
    std::cout << simpleClass << std::endl;
}