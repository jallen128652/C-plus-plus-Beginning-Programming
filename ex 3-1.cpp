#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    string firstName, lastName, department;
    
    double monthlyGrossSalary, bonus, taxes;
    double distanceTraveled, travelingTime;
    double coffeeCupsSold, price;
    double paycheck, averageSpeed, salesAmount; 
    double netPay, taxAmount;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    outFile << fixed << showpoint << setprecision(2);

    inFile >> firstName >> lastName >> department;
    inFile >> monthlyGrossSalary >> bonus >> taxes;
    inFile >> distanceTraveled >> travelingTime;
    inFile >> coffeeCupsSold >> price;

    netPay = monthlyGrossSalary * (1 + bonus/100); 
    taxAmount =  netPay * (taxes/100);
    paycheck = netPay - taxAmount;

    averageSpeed = distanceTraveled / travelingTime;

    salesAmount = coffeeCupsSold * price;

    outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << monthlyGrossSalary << ", Monthly Bonus: " << bonus;
    outFile << "%, Taxes: " << taxes << "%," << endl;
    outFile << "Paycheck: $" << paycheck << endl;
    outFile << endl;
    outFile << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: ";
    outFile << travelingTime << " hours" << endl;
    outFile << "Average Speed: " << averageSpeed << " miles per hour" << endl;
    outFile << endl;
    outFile << "Number of Coffee Cups Sold: " << static_cast<int>(coffeeCupsSold) << ", Cost: $" << price << " per cup" << endl;
    outFile << "Sales Amount = $" << salesAmount << endl;

    inFile.close();
    outFile.close();

    
return 0;
}
