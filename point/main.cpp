// head
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;/*namespace*/

struct Data {
    int value;
};

void function(int *vec, size_t size) {
    cout << "use the function\n";
    for (size_t i = 0; i < size; ++i) {
        cout << setw(5) << left << *(vec + i);
    }
    cout << endl;
}

int main() {
    srand(time(nullptr));/*set random seeds*/

    cout << "simple pointer\n";
    int *simplepointer = new int;/*declare a point to vector*/
    *simplepointer = 5;/*set value*/
    cout << simplepointer << endl;/*address*/
    cout << *simplepointer << endl;/*value*/

    cout << "array pointer\n";
    int length = 10;/*array of length*/
    int *arraypointer = new int[length];/*declare the array*/
    for (int i = 0; i < length; ++i) {/*initialize the array*/
        *(arraypointer + i) = rand() % 100;/*random*/
        cout << setw(5) << left << *(arraypointer + i);/*print the value*/
    }
    cout << endl;
    function(arraypointer, length);

    cout << "vector pointer\n";
    int **vectorpointer = new int *[5];/*declare Two-dimensional array*/
    for (int i = 0; i < 5; ++i) {/*colum*/
        *(vectorpointer + i) = new int[10];
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            vectorpointer[i][j] = i * j;
            cout << left << setw(5) << vectorpointer[i][j];
        }
        cout << endl;
    }

    cout << "Object pointer\n";
    Data data;/*declare Data struct*/
    Data *datapointer = &data;/*object pointer*/
    datapointer->value = 5;/*value*/
    cout << datapointer->value << endl;/*pinter to get the value*/
    cout << data.value << endl;/*object to get the value*/

    return 0;
}
