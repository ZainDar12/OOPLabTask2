#include <iostream>
#include <vector>
using namespace std;
class Marker{
    string Company;
    string Colour;
    bool Refillable;
    bool InkStatus;
public:
    void SetCompany(string company){
        Company = company;
    }
    void SetColour(string colour){
        Colour = colour;
    }
    void SetRefillable(bool refillable){
        Refillable = refillable;
    }
    void SetInkStatus(bool inkStatus){
        InkStatus = inkStatus;
    }
    void DisplayDetails(){
        cout << "Company: " << Company << endl;
        cout << "Colour: " << Colour << endl;
        cout << "Refillable: " << (Refillable ? "Yes" : "No") << endl;
        cout << "Ink Status: " << (InkStatus ? "Full" : "Empty") << endl;
    }
    void write(){
        if(InkStatus){
            cout << "Marker is writing..." << endl;
        } else {
            cout << "Marker cannot write, ink is empty." << endl;
        }
    }
    void refill(){
        if(Refillable){
            InkStatus = true;
            cout << "Marker has been refilled." << endl;
        } else {
            cout << "Marker is not refillable." << endl;
        }
    }
};
int main(){
    Marker marker1;
    marker1.SetCompany("Dolla");
    marker1.SetColour("Blue");
    marker1.SetRefillable(true);
    marker1.SetInkStatus(false);
    marker1.DisplayDetails();
    marker1.write();
    marker1.refill();
    marker1.write();
    return 0;
}