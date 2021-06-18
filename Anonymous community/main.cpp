#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

/**
 * Anonymous union representing a value
 */
struct NumForm {

    // Used to describe the type
    enum NumType {
        INTEGER_INT,/*INT*/
        INTEGER_LONG,/*Long*/
        INTEGER_DOUBLE/*Double*/
    };

    NumType type;/*typeValue*/

    // The declaration contains the following types of unions
    union {
        int iValue;/*int*/
        long lValue;/*long*/
        double dValue;/*double*/
    };

    void print() const;
};

/**
 * According to the data type, print the corresponding information
 */
void NumForm::print() const {
    switch (type) {
        case INTEGER_INT:/*if is integer*/
            printf("数据类型为Integer,其值为%d\n", iValue);
            break;
        case INTEGER_LONG:/*if is long*/
            printf("数据类型为Long,其值为%ld\n", lValue);
            break;
        case INTEGER_DOUBLE:/*if is double*/
            printf("数据类型为Double,其值为%f\n", dValue);
            break;
    }
}

int main(int argc, char *argv[]) {
    int count = argc - 1;/*Count for the number of the input*/
    cout << "输入个数为:" << count << endl;
    auto *Values = new NumForm[argc];/*Store the input parameter information*/
    for (int i = 1; i < argc; ++i) {
        if (strchr(argv[i], '.') != nullptr) {/*if is floating type*/

            // convert to float
            Values[i].dValue = atof(argv[i]);
            Values[i].type = NumForm::NumType::INTEGER_DOUBLE;
        } else {/*if not floating type*/

            /*
             * If the data is greater than the maximum value of the int type,
             * store it in the lValue member and record the type
             */
            if ((atol(argv[i]) > INT_MAX) || (atol(argv[i]) < 0)) {

                // convert to the long type
                Values[i].lValue = atol(argv[i]);
                Values[i].type = NumForm::NumType::INTEGER_LONG;
            } else {

                // store it in the iValue member and record the type
                Values[i].iValue = atoi(argv[i]);
                Values[i].type = NumForm::NumType::INTEGER_INT;
            }
        }
        Values[i].print();/*print the value*/
    }
    return 0;
}
