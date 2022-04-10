//
// Created by troy_ on 31/3/2022.
//

#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(int employeeId, int jobId, float paymentPerHour, const BankAccount &bankAccount,
                                   vector<Address> *addressList, int workingHours) : Employee(employeeId, jobId,
                                                                                              paymentPerHour,
                                                                                              bankAccount, addressList),
                                                                                     workingHours(workingHours) {}

FullTimeEmployee::~FullTimeEmployee() {

}

int FullTimeEmployee::getWorkingHours() const {
    return workingHours;
}

// Retorna las horas trabajadas * pago por hora - 29% de impuesto
float FullTimeEmployee::calculateSalary() {
    float tax = (workingHours * getPaymentPerHour()*0.29);

    return (workingHours * getPaymentPerHour()) - tax;
}

void FullTimeEmployee::setWorkingHours(int workingHours) {
    FullTimeEmployee::workingHours = workingHours;
}

string FullTimeEmployee::returnHomeAddress() {
    string addressFound;
    for (auto &cont : *getAddressList()){
        if (cont.getType() == "HOME"){
            addressFound = cont.getAddress();
        }
    }
    return addressFound;
}

ostream &operator<<(ostream &os, const FullTimeEmployee &employee) {
    os << static_cast<const Employee &>(employee);
    os << "   workingHours: " << employee.workingHours;
    return os;
}

FullTimeEmployee::FullTimeEmployee() {}

