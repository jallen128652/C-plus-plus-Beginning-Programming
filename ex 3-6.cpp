#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    double mass;
    double density;
    double volume;
    
    cout << "Enter the Mass of an object in grams." << endl;

    cin >> mass;

    cout << "Enter the Density of an object in grams per cubic centimeter." << endl;

    cin >> density;

    volume = mass / density;

    cout << fixed << showpoint << setprecision(2);

    cout << "Volume of your object in grams per cubic centimeter: " << volume << endl;

    return 0;
}
