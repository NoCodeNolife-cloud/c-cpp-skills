#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void mergeSort(vector<int> &vec, int left, int middle, int right) {
    vector<int> temp;
    int tleft = 0, tright = middle;
    while (tleft <= middle-1 && tright <= right) {
        if (vec[tleft] > vec[tright]) {
            temp.push_back(vec[tright++]);
        } else {
            temp.push_back(vec[tleft++]);
        }
    }
    while (tleft <= middle-1) {
        temp.push_back(vec[tright++]);
    }
    while (tright <= right) {
        temp.push_back(vec[tleft++]);
    }
    for (int i = 0; i < temp.size(); i++) {
        vec[left + i] = temp[i];
    }
}

void merge(vector<int> &vec, int left, int right) {
    if (left == right) {
        return;
    }
    int middle = (left + right) / 2;
    merge(vec, left, middle);
    merge(vec, middle + 1, right);
    mergeSort(vec, left, middle, right);
}

struct Rand {
    int operator()() const {
        return rand() % 100;
    }
};

void printvector(vector<int>vec){
    for (int item:vec) {
        cout << setw(5) << left << item;
    }
    cout << endl;
}

ostream& operator<<(ostream&os,vector<int>vec){
    for (int item:vec) {
        os << setw(5) << left << item;
    }
    os << endl;
    return os;
}

int main() {
    srand(time(nullptr));
    vector<int> vec(10);
    generate(vec.begin(), vec.end(), Rand());
    cout<<vec;
    merge(vec,0,vec.size()-1);
    cout<<vec;

    return 0;
}
