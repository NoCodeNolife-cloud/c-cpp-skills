#include <iostream>

using namespace std;

template<class T>
void print(T value) {
    cout << value << endl;
}

template<typename T, typename...Args>
void print(T value, Args... args) {
    cout << value << endl;
    print(args...);
}

int main() {
    print("hello", 100, 1542.01);

    return 0;
}
