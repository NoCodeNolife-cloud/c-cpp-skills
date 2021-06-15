//
// Created by 云非雪墨非白 on 2021/6/12.
//

#include "Person.h"

const string &Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

void Person::setName(const string &name) {
    Person::name = name;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::print() const {
    cout<<"["<<left<<setw(10)<<name<<right<<setw(10)<<age<<"]\n";
}

Person::Person(const string &name, int age) : name(name), age(age) {}
