#include <iostream>
#include <bitset>
using namespace std;
int main() {
    for(int i=-5;i<=5;i++){
        bitset<32> bitset(i);
        cout<<bitset<<endl;
    }
    return 0;
}
