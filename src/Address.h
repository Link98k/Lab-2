//
// Created by troy_ on 31/3/2022.
//
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#ifndef LAB02_OOP_LINK98K_ADDRESS_H
#define LAB02_OOP_LINK98K_ADDRESS_H


class Address {
private:
    string type;
    string address;
public:
    Address();

    Address(const string &type, const string &address);
    virtual ~Address();

    const string &getType() const;
    void setType(const string &type);
    const string &getAddress() const;
    void setAddress(const string &address);

};


#endif //LAB02_OOP_LINK98K_ADDRESS_H
