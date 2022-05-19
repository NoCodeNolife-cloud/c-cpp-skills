#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec(10);
    std::iota(vec.begin(), vec.end(), 2);
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
}
