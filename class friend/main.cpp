#include <iostream>
#include "Data.h"
#include "FriendClass.h"

using namespace std;

int main() {

    Data data(5, 6);
    function(cout, data) << endl;
    FriendClass friendClass;

    return 0;
}
