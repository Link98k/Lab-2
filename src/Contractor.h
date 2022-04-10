//
// Created by troy_ on 31/3/2022.
//
#include <ostream>
#include "Employee.h"
#include "IWorkingFromHome.h"
#include "IWorkingFromOffice.h"
#ifndef LAB02_OOP_LINK98K_CONTRACTOR_H
#define LAB02_OOP_LINK98K_CONTRACTOR_H


class Contractor : public Employee, public IWorkingFromOffice, public IWorkingFromHome{
private:
    int fixedHours;
public:
    Contractor();

    Contractor(int employeeId, int jobId, float paymentPerHour, const BankAccount &bankAccount,
               vector<Address> *addressList, int fixedHours);
    ~Contractor() override;
    int getFixedHours() const;
    void setFixedHours(int fixedHours);

    float calculateSalary() override;
    string returnOfficeAddress() override;
    string returnHomeAddress() override;

    friend ostream &operator<<(ostream &os, const Contractor &contractor);
};


#endif //LAB02_OOP_LINK98K_CONTRACTOR_H
