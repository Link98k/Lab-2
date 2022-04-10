//
// Created by troy_ on 31/3/2022.
//
#include "Person.h"
#include "Address.h"
#include "BankAccount.h"
#include <vector>
#include <ostream>

#ifndef LAB02_OOP_LINK98K_EMPLOYEE_H
#define LAB02_OOP_LINK98K_EMPLOYEE_H


class Employee : public Person{
private:
    int employeeId;
    int jobId;
    float paymentPerHour;
    BankAccount bankAccount;
    vector<Address>* addressList;
public:
    Employee();
    Employee(int employeeId, int jobId, float paymentPerHour, const BankAccount &bankAccount,
             vector<Address> *addressList);
    virtual ~Employee();

    int getEmployeeId() const;
    void setEmployeeId(int employeeId);
    int getJobId() const;
    void setJobId(int jobId);
    float getPaymentPerHour() const;
    void setPaymentPerHour(float paymentPerHour);
    const BankAccount &getBankAccount() const;
    void setBankAccount(const BankAccount &bankAccount);
    vector<Address> *getAddressList() const;
    void setAddressList(vector<Address> *addressList);
    virtual float calculateSalary()=0;

    friend ostream &operator<<(ostream &os, const Employee &employee);
};


#endif //LAB02_OOP_LINK98K_EMPLOYEE_H
