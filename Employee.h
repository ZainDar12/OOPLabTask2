#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee{
private:
    string name;
    double salary;
    int tax;
public:
    void GetData();
    double SalaryAfterTax();
    void SetTax(int t);
};
#endif