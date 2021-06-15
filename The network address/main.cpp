#include <bits/stdc++.h>

using namespace std;

int main() {

    /**
     * create ip address and mask
     */
    int ip_1, ip_2, ip_3, ip_4;
    int mask_1, mask_2, mask_3, mask_4;

    /**
     * get ip address
     */
    cout << "ÊäÈëIPµØÖ·: ";
    string tmp;
    getline(cin, tmp, '.');
    ip_1 = atoi(tmp.c_str());
    tmp.clear();
    getline(cin, tmp, '.');
    ip_2 = atoi(tmp.c_str());
    tmp.clear();
    getline(cin, tmp, '.');
    ip_3 = atoi(tmp.c_str());
    tmp.clear();
    getline(cin, tmp, '\n');
    ip_4 = atoi(tmp.c_str());
    tmp.clear();

    cout << "ÊäÈë×ÓÍøÑÚÂë: ";
    getline(cin, tmp, '.');
    mask_1 = atoi(tmp.c_str());
    tmp.clear();
    getline(cin, tmp, '.');
    mask_2 = atoi(tmp.c_str());
    tmp.clear();
    getline(cin, tmp, '.');
    mask_3 = atoi(tmp.c_str());
    tmp.clear();
    getline(cin, tmp, '\n');
    mask_4 = atoi(tmp.c_str());
    tmp.clear();

    /**
     * resolve exception
     */
    if (ip_1 > 255 or ip_1 < 0 or ip_2 > 255 or ip_2 < 0 or ip_3 > 255 or ip_3 < 0 or ip_4 > 255 or ip_4 < 0 or
        mask_1 > 255 or mask_1 < 0 or mask_2 > 255 or mask_2 < 0 or mask_3 > 255 or mask_3 < 0 or mask_4 > 255 or
        mask_4 < 0) {
        cout << "input error\n";
        exit(EXIT_FAILURE);
    }

    /**
     * print
     */
    cout << "ÍøÂçµØÖ·Îª: ";
    cout << int(ip_1 & mask_1) << '.' << int(ip_2 & mask_2) << '.' << int(ip_3 & mask_3) << '.' << int(ip_4 & mask_4)
         << endl;

    /**
     * exit
     */
    return 0;
}