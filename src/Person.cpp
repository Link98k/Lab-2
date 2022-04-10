//
// Created by troy_ on 31/3/2022.
//

#include "Person.h"

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person(const string &name, int age) : name(name), age(age) {
}

Person::Person() {
    name="";
    age=0;
}

Person::~Person() {
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "name: " << person.name << " age: " << person.age;
    return os;
}
