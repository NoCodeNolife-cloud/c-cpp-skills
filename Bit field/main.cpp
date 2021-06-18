#include <iostream>

using namespace std;

struct TDC{
    int value:7;
};

int main() {

    TDC tdc;
    tdc.value=5;
    cout<<tdc.value<<endl;
    return 0;
}
