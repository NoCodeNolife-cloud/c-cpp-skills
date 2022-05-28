#include <iostream>

void atexit_handler_1() {
    std::cout << "at exit #1\n";
}

void atexit_handler_2() {
    std::cout << "at exit #2\n";
}

int main() {
    std::atexit(atexit_handler_1);
    std::atexit(atexit_handler_2);

    std::cout << "returning from main\n";
    return 0;
}