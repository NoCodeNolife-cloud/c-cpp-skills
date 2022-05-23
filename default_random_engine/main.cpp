#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

int main() {
    std::default_random_engine defaultRandomEngine(time(nullptr));
    std::uniform_int_distribution<int> uniformIntDistribution(0, 100);
    for (int i = 0; i < 10; i++) {
        std::cout.setf(std::ios::left);
        std::cout << std::setw(5) << uniformIntDistribution(defaultRandomEngine);
    }
    return 0;
}
