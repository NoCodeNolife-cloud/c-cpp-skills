#include <iostream>
#include <valarray>

using namespace std;

template<class T>
void printValarray(const valarray<T> &va, int num) {

    for (int i = 0; i < va.size() / num; ++i) {

        for (int j = 0; j < num; ++j) {

            cout << va[i * num + j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    valarray<double> va(12);

    for (int i = 0; i < 12; ++i) {

        va[i] = i;
    }

    printValarray(va, 3);

    va[va < 5.0] = 77.0;
    va[va > 5.0 && va < 9.0] = valarray<double>(va[va > 5.0 && va < 9.0]) + 100.0;

    printValarray(va, 3);

    return 0;
}
