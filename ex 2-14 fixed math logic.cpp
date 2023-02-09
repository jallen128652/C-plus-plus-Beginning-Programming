#include <iostream>

using namespace std;

int main() {
    // Write your main here

cout << "This program calculates the actual output of your Harddrive";

double advertisedGBs;
double actualGBs;

cout << "Enter the advertised GB's for your Hardrive" << endl;
cin >> advertisedGBs;


actualGBs =((advertisedGBs * 1000000000) / 1024 / 1024 / 1024);

cout << " Actual Storage Size =" << actualGBs << endl;

    return 0;
}
