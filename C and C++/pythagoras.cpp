#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int perpendicular;
    int base;
    int hypotenuse;

    cout << "Enter the Perpendicular of Right Traingle: ";
    cin >> perpendicular;

    cout << "Enter the Base of Right Traingle: ";
    cin >> base;

    hypotenuse = sqrt(pow(perpendicular, 2) + pow(base, 2));
    
    cout << "The Hypotenuse of given right traingle is: " << hypotenuse;

}