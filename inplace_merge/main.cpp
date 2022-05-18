#include <iostream>     // std::cout
#include <algorithm>    // std::merge

using namespace std;

int main() {
    //该数组中存储有 2 个有序序列
    int first[] = {5, 10, 15, 20, 25, 7, 17, 27, 37, 47, 57};
    //将 [first,first+5) 和 [first+5,first+11) 合并为 1 个有序序列。
    inplace_merge(first, first + 5, first + 11);
    for (int i = 0; i < 11; i++) {
        cout << first[i] << " ";
    }
    return 0;
}