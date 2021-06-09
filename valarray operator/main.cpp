#include <iostream>
#include <valarray>

using namespace std;

int main() {

    valarray<int> val;
    val.resize(20);

    // index to initalize
    for (int i = 0; i < val.size(); ++i) {
        val[i] = -1 * i;
    }

    for (int i = 0; i < val.size(); ++i) {
        cout << val[i] << " ";
    }
    cout << endl;

    // for-each
    for (int item:val) {
        cout << item << " ";
    }
    cout << endl;

    // super function
    val = abs(val);
    for (int item:val) {
        cout << item << " ";
    }
    cout << endl;

    val = pow(val, 2);
    for (int item:val) {
        cout << item << " ";
    }
    cout << endl;

    val = sqrt(val);
    for (int item:val) {
        cout << item << " ";
    }
    cout << endl;

    val=exp(val);
    for(int item:val){
        cout<<item<<" ";
    }
    cout<<endl;

    return 0;
}
