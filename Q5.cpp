#include <iostream>
#include "Employee.h"
using namespace std;
void Employee::GetData(){
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Salary: ";
    cin >> salary;
}
double Employee::SalaryAfterTax(){
    return salary - (salary * tax / 100);
}
void Employee::SetTax(int t){
    tax = t;
}
void Employee::Display(){
    cout << "Name: " << name << endl;
    cout << "Salary after tax: " << SalaryAfterTax() << endl;
}
int main(){
    Employee e1,e2,e3;
    cout<<"Enter details for Employee 1:"<<endl;
    e1.GetData();
    e1.SetTax(10); // Setting tax to 10%
    cout<<"Enter details for Employee 2:"<<endl;
    e2.GetData();
    e2.SetTax(15); // Setting tax to 15%
    cout<<"Enter details for Employee 3:"<<endl;
    e3.GetData();
    e3.SetTax(20); 
    // Setting tax to 20%
    return 0;
}
