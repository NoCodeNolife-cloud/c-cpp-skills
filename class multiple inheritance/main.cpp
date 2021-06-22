#include <iostream>
#include "C.h"

using namespace std;

int main() {
    C *pc = new C;
    // pc->function();/*Member 'function' found in multiple base classes of different types*/

    // point to the function
    pc->A::function();
    pc->B::function();

    return 0;
}
