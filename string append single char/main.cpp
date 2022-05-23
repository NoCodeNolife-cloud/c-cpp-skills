#include <iostream>

int main() {
    std::string str = "hello char ";
    str.append(1, 'A');
    std::cout << str << std::endl;
    return 0;
}
