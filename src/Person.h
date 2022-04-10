//
// Created by troy_ on 31/3/2022.
//
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#ifndef LAB02_OOP_LINK98K_PERSON_H
#define LAB02_OOP_LINK98K_PERSON_H


class Person {
private:
    string name;
    int age;
public:
    Person();
    Person(const string &name, int age);
    virtual ~Person();

    const string &getName() const;
    void setName(const string &name);
    int getAge() const;
    void setAge(int age);

    friend ostream &operator<<(ostream &os, const Person &person);

};


#endif //LAB02_OOP_LINK98K_PERSON_H
