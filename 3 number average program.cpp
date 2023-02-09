//include statement(s)
#include <iostream>

using namespace std;


int main()
{
cout << "Please type in any number." << endl;
//variable declaration
double num1;
double num2;
double num3;
int average;
//initialize variable
cout << "enter number 1" << endl;
cin >> num1;
cout << "enter number 2" << endl;
cin >> num2;
cout << "enter number 3" << endl;
cin >> num3;
average = (num1 + num2 + num3) / 3;


//executable statements
cout << "Num1=" << num1 << endl;
cout << "Num2=" << num2 << endl;
cout << "Num3=" << num3 << endl;
cout << "Average=" << average << endl;

return 0;
}
