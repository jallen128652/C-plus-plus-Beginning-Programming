//include statement(s)

#include <iostream>
#include <string>

//using namespace statement

using namespace std;
const int SECRET = 11;
const double RATE = 12.50; 

int main()
{
    //variable declaration
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    cout << "Please enter your hours worked for num1 and press enter" << endl;
    cin >> num1;
    cout << "Please enter your hours worked for num2 and press enter" << endl;
    cin >> num2;

    //executable statements
    cout << "the Value of num1 = " << num1; 
    cout << " and the value of num2 = " << num2 << "." << endl;

    newNum = (2 * num1) + num2;
    cout << "The new value of newNum = " << newNum << endl;
    newNum = newNum + SECRET;
    cout << "The new value of new num = " << newNum << endl;
    //return statement
    cout << "Enter a last name: " << endl;
    cin >> name;

    cout << "Enter a decimal number between 0 and 70: " << endl;
    cin >> hoursWorked;

    wages = RATE * hoursWorked;

    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    

    return 0;
}
