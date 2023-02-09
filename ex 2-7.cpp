#include <iostream>

using namespace std;

int main()
{

cout << "Input a real number to the fourth significant digit" << endl;
cout << "Example: 1.234" << endl;


double number;
//declare variable

//initialize variable

cout << "Enter your number: " << endl;

cin >> number;


cout << "Number = " << static_cast<int>(number + 0.5) << endl;


return 0;

}
