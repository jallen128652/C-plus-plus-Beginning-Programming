//library streams required
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {\
//declare streams 
  ifstream inFile;
  ofstream outFile;

//declare variables
  string fileName;
  string lastName, firstName;
  double currentSalary, percentRaise;
  double updatedSalary;

//input filename
  cout << "Enter the file name.\n";
  cin >> fileName;

//open files
  inFile.open(fileName);
  outFile.open("Ch3_Ex5Output.dat"); //use quotation marks for naming file in the stream

//output precision  
  outFile << fixed << showpoint << setprecision(2);

//first line of output
//get input values
  inFile >> lastName >> firstName >> currentSalary >> percentRaise;

//execute math
  updatedSalary = (currentSalary * (percentRaise/100)) + currentSalary;

//output to file
  outFile << firstName << " " << lastName << " " << updatedSalary << endl;

//second line of output
  inFile >> lastName >> firstName >> currentSalary >> percentRaise;

  updatedSalary = (currentSalary * (percentRaise/100)) + currentSalary;

  outFile << firstName << " " << lastName << " " << updatedSalary << endl;

//third line of output
  inFile >> lastName >> firstName >> currentSalary >> percentRaise;

  updatedSalary = (currentSalary * (percentRaise/100)) + currentSalary;

  outFile << firstName << " " << lastName << " " << updatedSalary << endl;
 

    return 0;
}
