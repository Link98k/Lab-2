//
// Created by troy_ on 31/3/2022.
//
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#ifndef LAB02_OOP_LINK98K_BANKACCOUNT_H
#define LAB02_OOP_LINK98K_BANKACCOUNT_H


class BankAccount {
private:
    int bankNumber;
public:
    BankAccount();

    BankAccount(int bankNumber);
    virtual ~BankAccount();

    int getBankNumber() const;
    void setBankNumber(int bankNumber);
};


#endif //LAB02_OOP_LINK98K_BANKACCOUNT_H
