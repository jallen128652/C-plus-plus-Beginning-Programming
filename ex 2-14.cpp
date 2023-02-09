#include <iostream>

using namespace std;

int main() {
    // Write your main here

cout << "This program calculates the actual output of your Harddrive"

double advertisedGBs
double actualGBs
double difference

cout << "Enter the advertised GB's for your Hardrive" << endl;
cin >> advertisedGBs;

difference = advertisedGBs * .024;
actualGBs = advertisedGBs - difference;

cout << " Actual Storage Size =" << actualGBs << endl;

    return 0;
}
