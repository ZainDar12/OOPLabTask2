#include <iostream>
#include <vector>
using namespace std;
class Water_Bottle{
    string Company;
    string Colour;
    double CapacityL; 
    double Capacityml;
public:
    void SetCompany(string company){
        Company = company;
    }
    void SetColour(string colour){
        Colour = colour;
    }
    void SetCapacityL(double capacityL){
        CapacityL = capacityL/1000.0;
        Capacityml = capacityL; 
    }
    void DisplayDetails(){
        cout << "Company: " << Company << endl;
        cout << "Colour: " << Colour << endl;
        cout << "Capacity: " << CapacityL << " L (" << Capacityml << " ml)" << endl;
    }
};
int main(){
    Water_Bottle bottle1;
    bottle1.SetCompany("AquaFina");
    bottle1.SetColour("Transparent");
    bottle1.SetCapacityL(1500); 
    bottle1.DisplayDetails();
    return 0;
}