#include <iostream>
#include <valarray>
#include <ctime>

using namespace std;

int main() {

    // srand
    srand(time(NULL));

    // valarray
    valarray<int> val;
    val.resize(12);

    // initialize
    for (int i = 0; i < val.size(); ++i) {

        val[i] = rand() % 100;
    }

    //  print
    for (int i = 0; i < val.size(); ++i) {

        cout << val[i] << " ";
    }
    cout << endl;

    cout << "max:" << val.max() << endl;
    cout << "min:" << val.min() << endl;
    cout << "sum:" << val.sum() << endl;
    cout << "size:" << val.size() << endl;
    cout << "average:" << val.sum() / val.size() << endl;

    // slice
    // o:index
    // d:size
    // s:stride
    val[slice(0,4,3)]=10;

    // print
    for(int i=0;i<val.size();++i){

        cout<<val[i]<<" ";
    }
    cout<<endl;

    // exit
    return 0;
}
