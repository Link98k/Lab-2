//
// Created by troy_ on 31/3/2022.
//

#include "Contractor.h"

Contractor::Contractor(int employeeId, int jobId, float paymentPerHour, const BankAccount &bankAccount,
                       vector<Address> *addressList, int fixedHours) : Employee(employeeId, jobId, paymentPerHour,
                                                                                bankAccount, addressList),
                                                                       fixedHours(fixedHours) {}

Contractor::~Contractor() {

}

int Contractor::getFixedHours() const {
    return fixedHours;
}

void Contractor::setFixedHours(int fixedHours) {
    Contractor::fixedHours = fixedHours;
}

// Retorna las horas fijas * pago por hora
float Contractor::calculateSalary() {
    return fixedHours*getPaymentPerHour();
}

//falta hacer
string Contractor::returnOfficeAddress() {
    string addressFound;
    for (auto &cont : *getAddressList()){
        if (cont.getType() == "OFFICE"){
            addressFound = cont.getAddress();
        }
    }
    return addressFound;
}

//falta hacer
string Contractor::returnHomeAddress() {
    string addressFound;
    for (auto &cont : *getAddressList()){
        if (cont.getType() == "HOME"){
            addressFound = cont.getAddress();
        }
    }
    return addressFound;
}

ostream &operator<<(ostream &os, const Contractor &contractor) {
    os << static_cast<const Employee &>(contractor) << " ";
    return os;
}

Contractor::Contractor() {}

