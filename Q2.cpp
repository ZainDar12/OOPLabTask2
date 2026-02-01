#include <iostream>
#include <vector>
using namespace std;
class Circle{
    double radius;
    double pi=3.14159;
public:
    void SetRadius(double r){
        radius = r;
    }
    double GetArea(){
        return pi * radius * radius;
    }
    double GetCircumference(){
        return 2 * pi * radius;
    }
    double getDiameter(){
        return 2 * radius;
    }
};
int main(){
    Circle circle1;
    cout << "Enter radius of the circle: ";
    double r;
    cin >> r;
    circle1.SetRadius(r);
    cout << "Area: " << circle1.GetArea() << endl;
    cout << "Circumference: " << circle1.GetCircumference() << endl;
    cout << "Diameter: " << circle1.getDiameter() << endl;
}