#include <iostream>
using namespace std;
class Employee{
    string name;
    double salary;
    int tax;
public:
    void SetTax(int t){
        tax = t;
       cout<<"Salary after tax: " << GetSalaryAfterTax() << endl;
    }
    double GetSalaryAfterTax(){
        return salary - (salary * tax / 100);
    }
};
