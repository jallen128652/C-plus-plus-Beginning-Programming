//include statement(s)
#include <iostream>
#include <string>
//using namespace statement
using namespace std;

int main()
{
//variable declaration
string name;
double studyHours;

//executable statements
cout << " Please type in your name and hit enter:" << endl;
cin >> name;

cout << " Please input the number study hours you need to pass:" << endl;
cin >> studyHours;

cout << "Hello, " << name << "! On Saturday, you need to study ";
cout << studyHours << " hours for the exam." << endl;

//return statement
return 0;
}
