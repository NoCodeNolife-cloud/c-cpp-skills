#include <iostream>
#include <random>

int main() {
    const int nrolls = 10000;
    std::default_random_engine generator;
    std::bernoulli_distribution bernoulliDistribution(0.5);

    int count = 0;
    for (int i = 0; i < nrolls; i++) {
        if (bernoulliDistribution(generator)) {
            ++count;
        }
    }

    std::cout << "bernoulli_distribution (0.5) x 10000:" << std::endl;
    std::cout << "true:  " << count << std::endl;
    std::cout << "false: " << nrolls - count << std::endl;

    return 0;
}
