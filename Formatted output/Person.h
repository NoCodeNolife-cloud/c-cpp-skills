//
// Created by 云非雪墨非白 on 2021/6/12.
//

#ifndef FORMATTED_OUTPUT_PERSON_H
#define FORMATTED_OUTPUT_PERSON_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(const string &name, int age);

    const string &getName() const;

    int getAge() const;

    void setName(const string &name);

    void setAge(int age);

    void print() const;
};


#endif //FORMATTED_OUTPUT_PERSON_H
