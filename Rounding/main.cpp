#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    for (double i = 11.0; i < 12.0; i += 0.01) {
        cout << setw(10) << left << i << "floor:" << floor(i)/*向下取整*/
             << " ceil:" << ceil(i)/*向上取整*/
             << " round:" << round(i) << endl;/*四舍五入*/
    }

    return 0;
}
