#include <iostream>

using namespace std;

int main() {
    // Write your main here
cout << "Calculate how much your change is worth in cents!" << endl;
//Declare variables
int quarters;
int dimes;
int nickels;
int total;

//Initialize variables
cout << "Enter the number of Quarters you have." << endl;
cin >> quarters;
cout << "Enter the number of Dimes you have." << endl;
cin >> dimes;
cout << "Enter the number of Nickels you have." << endl;
cin >> nickels;

total = (quarters * 25) + (dimes * 10) + (nickels * 5);

//Execution statement
cout << "Pennies=" << total << endl;


return 0;
}
