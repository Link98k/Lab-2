//
// Created by troy_ on 31/3/2022.
//

#include "Employee.h"

Employee::Employee(int employeeId, int jobId, float paymentPerHour, const BankAccount &bankAccount,
                   vector<Address> *addressList) : employeeId(employeeId), jobId(jobId), paymentPerHour(paymentPerHour),
                                                   bankAccount(bankAccount), addressList(addressList) {}

Employee::~Employee() {

}

int Employee::getEmployeeId() const {
    return employeeId;
}

void Employee::setEmployeeId(int employeeId) {
    Employee::employeeId = employeeId;
}

int Employee::getJobId() const {
    return jobId;
}

void Employee::setJobId(int jobId) {
    Employee::jobId = jobId;
}

float Employee::getPaymentPerHour() const {
    return paymentPerHour;
}

void Employee::setPaymentPerHour(float paymentPerHour) {
    Employee::paymentPerHour = paymentPerHour;
}

const BankAccount &Employee::getBankAccount() const {
    return bankAccount;
}

void Employee::setBankAccount(const BankAccount &bankAccount) {
    Employee::bankAccount = bankAccount;
}

vector<Address> *Employee::getAddressList() const {
    return addressList;
}

void Employee::setAddressList(vector<Address> *addressList) {
    Employee::addressList = addressList;
}

ostream &operator<<(ostream &os, const Employee &employee) {
    os << static_cast<const Person &>(employee) << " employeeId: " << employee.employeeId << " jobId: "
       << employee.jobId << " paymentPerHour: " << employee.paymentPerHour << " bankAccount: bankNumber: " << employee.getBankAccount().getBankNumber();
    os <<  " addressList: type: ";
    for(auto &cont : *employee.getAddressList()){
        if(cont.getType() == "OFFICE"){
            os << "OFFICE, address: " << cont.getAddress();
        }
    }
    os <<  " type: ";
    for(auto &cont : *employee.getAddressList()){
        if(cont.getType() == "HOME"){
            os << "HOME, address: " << cont.getAddress();
        }
    }
    return os;
}

Employee::Employee() {

}
