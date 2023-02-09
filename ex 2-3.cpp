//include statement(s)
#include <iostream>

using namespace std;


int main()
{
cout << "This Program is pointless and just averages three" << endl;
cout << "predetermined variables." << endl;
//variable declaration
double num1;
double num2;
double num3;
int average;

//initialize variable
num1 = 125;
num2 = 28;
num3 = -25;
average = (num1 + num2 + num3) / 3;


//executable statements
cout << "Num1=" << num1 << endl;
cout << "Num2=" << num2 << endl;
cout << "Num3=" << num3 << endl;
cout << "Average=" << average << endl;

return 0;
}
