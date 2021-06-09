#include <iostream>
#include <string>
#include <cctype>

using namespace std;

struct ignorecase_traits : public char_traits<char> {

    static bool eq(const char &c1, const char &c2) {

        return toupper(c1) == toupper(c2);
    }

    static bool lt(const char &c1, const char &c2) {

        return toupper(c1) < toupper(c2);
    }

    static int compare(const char *s1, const char *s2, size_t n) {

        for (size_t i = 0; i < n; ++i) {

            if (!eq(s1[i], s2[i])) {

                return lt(s1[i], s2[i]) ? -1 : 1;
            }
        }

        return 0;
    }

    static const char *find(const char *s, size_t n, const char &c) {

        for (size_t i = 0; i < n; ++i) {

            if (eq(s[i], c)) {

                return &(s[i]);
            }
        }

        return nullptr;
    }
};

typedef basic_string<char, ignorecase_traits> icstring;

inline ostream &operator<<(ostream &strm, const icstring &s) {

    return strm << string(s.data(), s.length());
}

int main() {

    icstring s1("hallo");
    icstring s2("otto");
    icstring s3("hALLo");

    cout << boolalpha << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
    cout << boolalpha << s1 << " == " << s3 << " : " << (s1 == s3) << endl;

    icstring::size_type idx = s1.find("All");
    if (idx != icstring::npos) {

        cout << R"(index of "All" in ")" << s1 << "\": " << idx << endl;
    } else {

        cout << R"("All" not fount in ")" << s1 << endl;
    }

    return 0;
}
