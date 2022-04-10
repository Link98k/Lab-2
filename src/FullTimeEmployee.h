//
// Created by troy_ on 31/3/2022.
//
#include <ostream>
#include "Employee.h"
#include "IWorkingFromHome.h"

#ifndef LAB02_OOP_LINK98K_FULLTIMEEMPLOYEE_H
#define LAB02_OOP_LINK98K_FULLTIMEEMPLOYEE_H


class FullTimeEmployee : public Employee, public IWorkingFromHome{
private:
    int workingHours;
public:
    FullTimeEmployee();
    FullTimeEmployee(int employeeId, int jobId, float paymentPerHour, const BankAccount &bankAccount,
                     vector<Address> *addressList, int workingHours);
    ~FullTimeEmployee() override;

    int getWorkingHours() const;
    void setWorkingHours(int workingHours);

    float calculateSalary() override;
    string returnHomeAddress() override;

    friend ostream &operator<<(ostream &os, const FullTimeEmployee &employee);
};


#endif //LAB02_OOP_LINK98K_FULLTIMEEMPLOYEE_H
