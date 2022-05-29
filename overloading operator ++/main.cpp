#include <bits/stdc++.h>

namespace cod {
    class Base {
    private:
        int num;
    public:
        explicit Base(int paraNum = 10) : num(paraNum) {}

        Base &operator++() {
            num++;
        }

        const cod::Base operator++(int) {
            num++;
        }

        friend std::ostream &operator<<(std::ostream &os, const Base &base) {
            os << "num: " << base.num;
            return os;
        }
    };
}

int main() {
    cod::Base base(10);
    ++base;
    base++;
    std::cout << base << std::endl;
}