#include <iostream>
#include <string>
#include <iomanip>




using namespace std;

//Named constants for TDU charges
const double ONCOR_PER_MONTH = 3.42;
const double ONCOR_PER_KWH = 0.0384470;
const double CENTERPOINT_PER_MONTH = 5.47;
const double CENTERPOINT_PER_KWH = 0.0403120;
const double AEP_CENTRAL_PER_MONTH = 9.00;
const double AEP_CENTRAL_PER_KWH = 0.0448460;
const double AEP_NORTH_PER_MONTH = 10.52;
const double AEP_NORTH_PER_KWH = 0.0401990;
const double TEXAS_NEWMEXICO_PER_MONTH = 7.85;
const double TEXAS_NEWMEXICO_PER_KWH = 0.0483210;
//while loop sentinel controlled
const string SENTINEL = "SENTINEL";


int main()
{


    //Local variables 
    string firstName, lastName;
    double tduCharges = 0;
    double companyCharges = 0;
    double totalCharges = 0;

    //while loop sentinel control, allows to loop program for each new user
    while (firstName != SENTINEL)
    {
        int tduProvider = 0;
        //Name input
        cout << "Enter customers first name. To stop the program input SENTINEL\n";
        cin >> firstName;
        if (firstName != SENTINEL)
        {
            cout << "Enter customers last name\n";
            cin >> lastName;
            cout << endl;
        }
        else
        {
            cout << "Exiting program!";
            return 0;
        }


        //TDU provider selection 
        cout << "Enter the customers TDU provider: \n";
        cout << "1 for ONCOR\n";
        cout << "2 for Centerpoint\n";
        cout << "3 for AEP Central\n";
        cout << "4 for AEP North\n";
        cout << "5 for Texas New Mexico power\n";
        cin >> tduProvider;
        cout << endl;

        //number of months data to be entered and all the necessary variables
        cout << "Enter the number of months you want to submit data for.\n";
        double kwh1 = 0, kwh2 = 0, kwh3 = 0, kwh4 = 0, kwh5 = 0, kwh6 = 0, kwh7 = 0, kwh8 = 0, kwh9 = 0, kwh10 = 0, kwh11 = 0, kwh12 = 0;
        //kwh used per month
        double rkwh1 = 0, rkwh2 = 0, rkwh3 = 0, rkwh4 = 0, rkwh5 = 0, rkwh6 = 0, rkwh7 = 0, rkwh8 = 0, rkwh9 = 0, rkwh10 = 0, rkwh11 = 0, rkwh12 = 0;
        //electric company charges per month
        double tkwh1 = 0, tkwh2 = 0, tkwh3 = 0, tkwh4 = 0, tkwh5 = 0, tkwh6 = 0, tkwh7 = 0, tkwh8 = 0, tkwh9 = 0, tkwh10 = 0, tkwh11 = 0, tkwh12 = 0;
        //TDU charges per month
        double tlkwh1 = 0, tlkwh2 = 0, tlkwh3 = 0, tlkwh4 = 0, tlkwh5 = 0, tlkwh6 = 0, tlkwh7 = 0, tlkwh8 = 0, tlkwh9 = 0, tlkwh10 = 0, tlkwh11 = 0, tlkwh12 = 0;
        //Total charges per month

        int month;
        double totalKwh = 0;
        double rate1 = 0.0730;
        double rate2 = 0.0370;
        double rate3 = 0.0770;
        cout << fixed << showpoint << setprecision(2);

        //switch case based on months entered to enter each months data add up the total kwh
        cin >> month;
        switch (month)
        {
        case 1:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1;
            totalKwh = kwh1;
            break;
        case 2:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2;
            totalKwh = (kwh1 + kwh2);
            break;
        case 3:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3;
            totalKwh = (kwh1 + kwh2 + kwh3);
            break;
        case 4:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4);
            break;
        case 5:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5);
            break;
        case 6:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5 >> kwh6;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5 + kwh6);
            break;
        case 7:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5 >> kwh6 >> kwh7;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5 + kwh6 + kwh7);
            break;
        case 8:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5 >> kwh6 >> kwh7 >> kwh8;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5 + kwh6 + kwh7 + kwh8);
            break;
        case 9:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5 >> kwh6 >> kwh7 >> kwh8 >> kwh9;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5 + kwh6 + kwh7 + kwh8 + kwh9);
            break;
        case 10:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5 >> kwh6 >> kwh7 >> kwh8 >> kwh9 >> kwh10;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5 + kwh6 + kwh7 + kwh8 + kwh9 + kwh10);
            break;
        case 11:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5 >> kwh6 >> kwh7 >> kwh8 >> kwh9 >> kwh10 >> kwh11;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5 + kwh6 + kwh7 + kwh8 + kwh9 + kwh10 + kwh11);
            break;
        case 12:
            cout << "Input the KWH's for each month and press enter after each one.\n";
            cin >> kwh1 >> kwh2 >> kwh3 >> kwh4 >> kwh5 >> kwh6 >> kwh7 >> kwh8 >> kwh9 >> kwh10 >> kwh11 >> kwh12;
            totalKwh = (kwh1 + kwh2 + kwh3 + kwh4 + kwh5 + kwh6 + kwh7 + kwh8 + kwh9 + kwh10 + kwh11 + kwh12);
            break;


        default:
            cout << "Invalid input\n";
        }
        double discount = 15.00;
        double base = 9.95;
        //electric company charges control structures based on kwh used each month
        if (kwh1 > 0 && kwh1 <= 1199)
        {
            rkwh1 = base + (rate1 * kwh1);
        }
        else if (kwh1 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh1)) - discount;
        }
        else if (kwh1 >= 1201 && kwh1 <= 2000)
        {
            rkwh1 = (base + ((1200 * rate1) + ((kwh1 - 1200) * rate2))) - discount;
        }
        else if (kwh1 > 2000)
        {
            rkwh1 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh1 - 2000) * rate3))) - discount;
        }
        if (kwh2 > 0 && kwh2 <= 1199)
        {
            rkwh2 = base + (rate1 * kwh2);
        }
        else if (kwh2 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh2)) - discount;
        }
        else if (kwh2 >= 1201 && kwh2 <= 2000)
        {
            rkwh2 = (base + ((1200 * rate1) + ((kwh2 - 1200) * rate2))) - discount;
        }
        else if (kwh2 > 2000)
        {
            rkwh2 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh2 - 2000) * rate3))) - discount;
        }
        if (kwh3 > 0 && kwh3 <= 1199)
        {
            rkwh3 = base + (rate1 * kwh3);
        }
        else if (kwh3 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh3)) - discount;
        }
        else if (kwh3 >= 1201 && kwh3 <= 2000)
        {
            rkwh3 = (base + ((1200 * rate1) + ((kwh3 - 1200) * rate2))) - discount;
        }
        else if (kwh3 > 2000)
        {
            rkwh3 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh3 - 2000) * rate3))) - discount;
        }
        if (kwh4 > 0 && kwh4 <= 1199)
        {
            rkwh4 = base + (rate1 * kwh4);
        }
        else if (kwh4 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh4)) - discount;
        }
        else if (kwh4 >= 1201 && kwh4 <= 2000)
        {
            rkwh4 = (base + ((1200 * rate1) + ((kwh4 - 1200) * rate2))) - discount;
        }
        else if (kwh4 > 2000)
        {
            rkwh4 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh4 - 2000) * rate3))) - discount;
        }
        if (kwh5 > 0 && kwh5 <= 1199)
        {
            rkwh5 = base + (rate1 * kwh5);
        }
        else if (kwh5 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh5)) - discount;
        }
        else if (kwh5 >= 1201 && kwh5 <= 2000)
        {
            rkwh5 = (base + ((1200 * rate1) + ((kwh5 - 1200) * rate2))) - discount;
        }
        else if (kwh5 > 2000)
        {
            rkwh5 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh5 - 2000) * rate3))) - discount;
        }
        if (kwh6 > 0 && kwh6 <= 1199)
        {
            rkwh6 = base + (rate1 * kwh6);
        }
        else if (kwh6 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh6)) - discount;
        }
        else if (kwh6 >= 1201 && kwh6 <= 2000)
        {
            rkwh6 = (base + ((1200 * rate1) + ((kwh6 - 1200) * rate2))) - discount;
        }
        else if (kwh6 > 2000)
        {
            rkwh6 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh6 - 2000) * rate3))) - discount;
        }
        if (kwh7 > 0 && kwh7 <= 1199)
        {
            rkwh7 = base + (rate1 * kwh7);
        }
        else if (kwh7 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh7)) - discount;
        }
        else if (kwh7 >= 1201 && kwh7 <= 2000)
        {
            rkwh7 = (base + ((1200 * rate1) + ((kwh7 - 1200) * rate2))) - discount;
        }
        else if (kwh7 > 2000)
        {
            rkwh7 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh7 - 2000) * rate3))) - discount;
        }
        if (kwh8 > 0 && kwh8 <= 1199)
        {
            rkwh8 = base + (rate1 * kwh8);
        }
        else if (kwh8 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh8)) - discount;
        }
        else if (kwh8 >= 1201 && kwh8 <= 2000)
        {
            rkwh8 = (base + ((1200 * rate1) + ((kwh8 - 1200) * rate2))) - discount;
        }
        else if (kwh8 > 2000)
        {
            rkwh8 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh8 - 2000) * rate3))) - discount;
        }
        if (kwh9 > 0 && kwh9 <= 1199)
        {
            rkwh9 = base + (rate1 * kwh9);
        }
        else if (kwh9 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh9)) - discount;
        }
        else if (kwh9 >= 1201 && kwh9 <= 2000)
        {
            rkwh9 = (base + ((1200 * rate1) + ((kwh9 - 1200) * rate2))) - discount;
        }
        else if (kwh9 > 2000)
        {
            rkwh9 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh9 - 2000) * rate3))) - discount;
        }
        if (kwh10 > 0 && kwh10 >= 1199)
        {
            rkwh10 = base + (rate1 * kwh10);
        }
        else if (kwh10 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh10)) - discount;
        }
        else if (kwh10 >= 1201 && kwh10 <= 2000)
        {
            rkwh10 = (base + ((1200 * rate1) + ((kwh10 - 1200) * rate2))) - discount;
        }
        else if (kwh10 > 2000)
        {
            rkwh10 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh10 - 2000) * rate3))) - discount;
        }
        if (kwh11 > 0 && kwh11 >= 1199)
        {
            rkwh11 = base + (rate1 * kwh11);
        }
        else if (kwh11 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh11)) - discount;
        }
        else if (kwh11 >= 1201 && kwh11 <= 2000)
        {
            rkwh11 = (base + ((1200 * rate1) + ((kwh11 - 1200) * rate2))) - discount;
        }
        else if (kwh11 > 2000)
        {
            rkwh11 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh11 - 2000) * rate3))) - discount;
        }
        if (kwh12 > 0 && kwh12 >= 1199)
        {
            rkwh12 = base + (rate1 * kwh12);
        }
        else if (kwh12 == 1200)
        {
            rkwh1 = (base + (rate1 * kwh12)) - discount;
        }
        else if (kwh12 >= 1201 && kwh12 <= 2000)
        {
            rkwh12 = (base + ((1200 * rate1) + ((kwh12 - 1200) * rate2))) - discount;
        }
        else if (kwh12 > 2000)
        {
            rkwh12 = (base + ((1200 * rate1) + (800 * rate2) + ((kwh12 - 2000) * rate3))) - discount;
        }


        //TDU charges calculation control structure based on months kwh usage TDU provider selected
        if (tduProvider == 1)
        {
            tkwh1 = ONCOR_PER_KWH * kwh1 + ONCOR_PER_MONTH; tkwh2 = ONCOR_PER_KWH * kwh2 + ONCOR_PER_MONTH; tkwh3 = ONCOR_PER_KWH * kwh3 + ONCOR_PER_MONTH; tkwh4 = ONCOR_PER_KWH * kwh4 + ONCOR_PER_MONTH; tkwh5 = ONCOR_PER_KWH * kwh5 + ONCOR_PER_MONTH; tkwh6 = ONCOR_PER_KWH * kwh6 + ONCOR_PER_MONTH; tkwh7 = ONCOR_PER_KWH * kwh7 + ONCOR_PER_MONTH; tkwh8 = ONCOR_PER_KWH * kwh8 + ONCOR_PER_MONTH; tkwh9 = ONCOR_PER_KWH * kwh9 + ONCOR_PER_MONTH; tkwh10 = ONCOR_PER_KWH * kwh10 + ONCOR_PER_MONTH; tkwh11 = ONCOR_PER_KWH * kwh11 + ONCOR_PER_MONTH; tkwh12 = ONCOR_PER_KWH * kwh12 + ONCOR_PER_MONTH;
        }
        else if (tduProvider == 2)
        {
            tkwh1 = CENTERPOINT_PER_KWH * kwh1 + CENTERPOINT_PER_MONTH; tkwh2 = CENTERPOINT_PER_KWH * kwh2 + CENTERPOINT_PER_MONTH; tkwh3 = CENTERPOINT_PER_KWH * kwh3 + CENTERPOINT_PER_MONTH; tkwh4 = CENTERPOINT_PER_KWH * kwh4 + CENTERPOINT_PER_MONTH; tkwh5 = CENTERPOINT_PER_KWH * kwh5 + CENTERPOINT_PER_MONTH; tkwh6 = CENTERPOINT_PER_KWH * kwh6 + CENTERPOINT_PER_MONTH; tkwh7 = CENTERPOINT_PER_KWH * kwh7 + CENTERPOINT_PER_MONTH; tkwh8 = CENTERPOINT_PER_KWH * kwh8 + CENTERPOINT_PER_MONTH; tkwh9 = CENTERPOINT_PER_KWH * kwh9 + CENTERPOINT_PER_MONTH; tkwh10 = CENTERPOINT_PER_KWH * kwh10 + CENTERPOINT_PER_MONTH; tkwh11 = CENTERPOINT_PER_KWH * kwh11 + CENTERPOINT_PER_MONTH; tkwh12 = CENTERPOINT_PER_KWH * kwh12 + CENTERPOINT_PER_MONTH;
        }
        else if (tduProvider == 3)
        {
            tkwh1 = AEP_CENTRAL_PER_KWH * kwh1 + AEP_CENTRAL_PER_MONTH; tkwh2 = AEP_CENTRAL_PER_KWH * kwh2 + AEP_CENTRAL_PER_MONTH; tkwh3 = AEP_CENTRAL_PER_KWH * kwh3 + AEP_CENTRAL_PER_MONTH; tkwh4 = AEP_CENTRAL_PER_KWH * kwh4 + AEP_CENTRAL_PER_MONTH; tkwh5 = AEP_CENTRAL_PER_KWH * kwh5 + AEP_CENTRAL_PER_MONTH; tkwh6 = AEP_CENTRAL_PER_KWH * kwh6 + AEP_CENTRAL_PER_MONTH; tkwh7 = AEP_CENTRAL_PER_KWH * kwh7 + AEP_CENTRAL_PER_MONTH; tkwh8 = AEP_CENTRAL_PER_KWH * kwh8 + AEP_CENTRAL_PER_MONTH; tkwh9 = AEP_CENTRAL_PER_KWH * kwh9 + AEP_CENTRAL_PER_MONTH; tkwh10 = AEP_CENTRAL_PER_KWH * kwh10 + AEP_CENTRAL_PER_MONTH; tkwh11 = AEP_CENTRAL_PER_KWH * kwh11 + AEP_CENTRAL_PER_MONTH; tkwh12 = AEP_CENTRAL_PER_KWH * kwh12 + AEP_CENTRAL_PER_MONTH;
        }
        else if (tduProvider == 4)
        {
            tkwh1 = AEP_NORTH_PER_KWH * kwh1 + AEP_NORTH_PER_MONTH; tkwh2 = AEP_NORTH_PER_KWH * kwh2 + AEP_NORTH_PER_MONTH; tkwh3 = AEP_NORTH_PER_KWH * kwh3 + AEP_NORTH_PER_MONTH; tkwh4 = AEP_NORTH_PER_KWH * kwh4 + AEP_NORTH_PER_MONTH; tkwh5 = AEP_NORTH_PER_KWH * kwh5 + AEP_NORTH_PER_MONTH; tkwh6 = AEP_NORTH_PER_KWH * kwh6 + AEP_NORTH_PER_MONTH; tkwh7 = AEP_NORTH_PER_KWH * kwh7 + AEP_NORTH_PER_MONTH; tkwh8 = AEP_NORTH_PER_KWH * kwh8 + AEP_NORTH_PER_MONTH; tkwh9 = AEP_NORTH_PER_KWH * kwh9 + AEP_NORTH_PER_MONTH; tkwh10 = AEP_NORTH_PER_KWH * kwh10 + AEP_NORTH_PER_MONTH; tkwh11 = AEP_NORTH_PER_KWH * kwh11 + AEP_NORTH_PER_MONTH; tkwh12 = AEP_NORTH_PER_KWH * kwh12 + AEP_NORTH_PER_MONTH;
        }
        else if (tduProvider == 5)
        {
            tkwh1 = TEXAS_NEWMEXICO_PER_KWH * kwh1 + TEXAS_NEWMEXICO_PER_MONTH; tkwh2 = TEXAS_NEWMEXICO_PER_KWH * kwh2 + TEXAS_NEWMEXICO_PER_MONTH; tkwh3 = TEXAS_NEWMEXICO_PER_KWH * kwh3 + TEXAS_NEWMEXICO_PER_MONTH; tkwh4 = TEXAS_NEWMEXICO_PER_KWH * kwh4 + TEXAS_NEWMEXICO_PER_MONTH; tkwh5 = TEXAS_NEWMEXICO_PER_KWH * kwh5 + TEXAS_NEWMEXICO_PER_MONTH; tkwh6 = TEXAS_NEWMEXICO_PER_KWH * kwh6 + TEXAS_NEWMEXICO_PER_MONTH; tkwh7 = TEXAS_NEWMEXICO_PER_KWH * kwh7 + TEXAS_NEWMEXICO_PER_MONTH; tkwh8 = TEXAS_NEWMEXICO_PER_KWH * kwh8 + TEXAS_NEWMEXICO_PER_MONTH; tkwh9 = TEXAS_NEWMEXICO_PER_KWH * kwh9 + TEXAS_NEWMEXICO_PER_MONTH; tkwh10 = TEXAS_NEWMEXICO_PER_KWH * kwh10 + TEXAS_NEWMEXICO_PER_MONTH; tkwh11 = TEXAS_NEWMEXICO_PER_KWH * kwh11 + TEXAS_NEWMEXICO_PER_MONTH; tkwh12 = TEXAS_NEWMEXICO_PER_KWH * kwh12 + TEXAS_NEWMEXICO_PER_MONTH;
        }
        //total charges per month calculation
        tlkwh1 = tkwh1 + rkwh1;
        tlkwh2 = tkwh2 + rkwh2;
        tlkwh3 = tkwh3 + rkwh3;
        tlkwh4 = tkwh4 + rkwh4;
        tlkwh5 = tkwh5 + rkwh5;
        tlkwh6 = tkwh6 + rkwh6;
        tlkwh7 = tkwh7 + rkwh7;
        tlkwh8 = tkwh8 + rkwh8;
        tlkwh9 = tkwh9 + rkwh9;
        tlkwh10 = tkwh10 + rkwh10;
        tlkwh11 = tkwh11 + rkwh11;
        tlkwh12 = tkwh12 + rkwh12;


        //total electric company charges
        companyCharges = rkwh1 + rkwh2 + rkwh3 + rkwh4 + rkwh5 + rkwh6 + rkwh7 + rkwh8 + rkwh9 + rkwh10 + rkwh11 + rkwh12;

        //total tdu charge control structure based on months entered and tdu selection and tdu charges
        if (month == 1)
        {
            tduCharges = tkwh1;
        }
        else if (month == 2)
        {
            tduCharges = tkwh1 + tkwh2;
        }
        else if (month == 3)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3;
        }
        else if (month == 4)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4;
        }
        else if (month == 5)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5;
        }
        else if (month == 6)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5 + tkwh6;
        }
        else if (month == 7)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5 + tkwh6 + tkwh7;
        }
        else if (month == 8)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5 + tkwh6 + tkwh7 + tkwh8;
        }
        else if (month == 9)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5 + tkwh6 + tkwh7 + tkwh8 + tkwh9;
        }
        else if (month == 10)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5 + tkwh6 + tkwh7 + tkwh8 + tkwh9 + tkwh10;
        }
        else if (month == 11)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5 + tkwh6 + tkwh7 + tkwh8 + tkwh9 + tkwh10 + tkwh11;
        }
        else if (month == 12)
        {
            tduCharges = tkwh1 + tkwh2 + tkwh3 + tkwh4 + tkwh5 + tkwh6 + tkwh7 + tkwh8 + tkwh9 + tkwh10 + tkwh11 + tkwh12;
        }
        //total charges
        totalCharges = companyCharges + tduCharges;

        cout << endl;
        cout << endl;
        //outputs1 control structure that outputs the 3 outputs for each month of data
        cout << "Customer: " << firstName << " " << lastName << endl;
        if (month == 1)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;

        }
        else if (month == 2)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
        }
        else if (month == 3)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
        }
        else if (month == 4)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
        }
        else if (month == 5)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
        }
        else if (month == 6)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
            cout << "Month 6 Electric Company charges: $" << rkwh6 << endl;
            cout << "Month 6 TDU charges: $" << tkwh6 << endl;
            cout << "Month 6 Total charges: $" << tlkwh6 << endl;
        }
        else if (month == 7)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
            cout << "Month 6 Electric Company charges: $" << rkwh6 << endl;
            cout << "Month 6 TDU charges: $" << tkwh6 << endl;
            cout << "Month 6 Total charges: $" << tlkwh6 << endl;
            cout << "Month 7 Electric Company charges: $" << rkwh7 << endl;
            cout << "Month 7 TDU charges: $" << tkwh7 << endl;
            cout << "Month 7 Total charges: $" << tlkwh7 << endl;
        }
        else if (month == 8)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
            cout << "Month 6 Electric Company charges: $" << rkwh6 << endl;
            cout << "Month 6 TDU charges: $" << tkwh6 << endl;
            cout << "Month 6 Total charges: $" << tlkwh6 << endl;
            cout << "Month 7 Electric Company charges: $" << rkwh7 << endl;
            cout << "Month 7 TDU charges: $" << tkwh7 << endl;
            cout << "Month 7 Total charges: $" << tlkwh7 << endl;
            cout << "Month 8 Electric Company charges: $" << rkwh8 << endl;
            cout << "Month 8 TDU charges: $" << tkwh8 << endl;
            cout << "Month 8 Total charges: $" << tlkwh8 << endl;
        }
        else if (month == 9)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
            cout << "Month 6 Electric Company charges: $" << rkwh6 << endl;
            cout << "Month 6 TDU charges: $" << tkwh6 << endl;
            cout << "Month 6 Total charges: $" << tlkwh6 << endl;
            cout << "Month 7 Electric Company charges: $" << rkwh7 << endl;
            cout << "Month 7 TDU charges: $" << tkwh7 << endl;
            cout << "Month 7 Total charges: $" << tlkwh7 << endl;
            cout << "Month 8 Electric Company charges: $" << rkwh8 << endl;
            cout << "Month 8 TDU charges: $" << tkwh8 << endl;
            cout << "Month 8 Total charges: $" << tlkwh8 << endl;
            cout << "Month 9 Electric Company charges: $" << rkwh9 << endl;
            cout << "Month 9 TDU charges: $" << tkwh9 << endl;
            cout << "Month 9 Total charges: $" << tlkwh9 << endl;
        }
        else if (month == 10)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
            cout << "Month 6 Electric Company charges: $" << rkwh6 << endl;
            cout << "Month 6 TDU charges: $" << tkwh6 << endl;
            cout << "Month 6 Total charges: $" << tlkwh6 << endl;
            cout << "Month 7 Electric Company charges: $" << rkwh7 << endl;
            cout << "Month 7 TDU charges: $" << tkwh7 << endl;
            cout << "Month 7 Total charges: $" << tlkwh7 << endl;
            cout << "Month 8 Electric Company charges: $" << rkwh8 << endl;
            cout << "Month 8 TDU charges: $" << tkwh8 << endl;
            cout << "Month 8 Total charges: $" << tlkwh8 << endl;
            cout << "Month 9 Electric Company charges: $" << rkwh9 << endl;
            cout << "Month 9 TDU charges: $" << tkwh9 << endl;
            cout << "Month 9 Total charges: $" << tlkwh9 << endl;
            cout << "Month 10 Electric Company charges: $" << rkwh10 << endl;
            cout << "Month 10 TDU charges: $" << tkwh10 << endl;
            cout << "Month 10 Total charges: $" << tlkwh10 << endl;
        }
        else if (month == 11)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
            cout << "Month 6 Electric Company charges: $" << rkwh6 << endl;
            cout << "Month 6 TDU charges: $" << tkwh6 << endl;
            cout << "Month 6 Total charges: $" << tlkwh6 << endl;
            cout << "Month 7 Electric Company charges: $" << rkwh7 << endl;
            cout << "Month 7 TDU charges: $" << tkwh7 << endl;
            cout << "Month 7 Total charges: $" << tlkwh7 << endl;
            cout << "Month 8 Electric Company charges: $" << rkwh8 << endl;
            cout << "Month 8 TDU charges: $" << tkwh8 << endl;
            cout << "Month 8 Total charges: $" << tlkwh8 << endl;
            cout << "Month 9 Electric Company charges: $" << rkwh9 << endl;
            cout << "Month 9 TDU charges: $" << tkwh9 << endl;
            cout << "Month 9 Total charges: $" << tlkwh9 << endl;
            cout << "Month 10 Electric Company charges: $" << rkwh10 << endl;
            cout << "Month 10 TDU charges: $" << tkwh10 << endl;
            cout << "Month 10 Total charges: $" << tlkwh10 << endl;
            cout << "Month 11 Electric Company charges: $" << rkwh11 << endl;
            cout << "Month 11 TDU charges: $" << tkwh11 << endl;
            cout << "Month 11 Total charges: $" << tlkwh11 << endl;
        }
        else if (month == 12)
        {
            cout << "Month 1 Electric Company charges: $" << rkwh1 << endl;
            cout << "Month 1 TDU charges: $" << tkwh1 << endl;
            cout << "Month 1 Total charges: $" << tlkwh1 << endl;
            cout << "Month 2 Electric Company charges: $" << rkwh2 << endl;
            cout << "Month 2 TDU charges: $" << tkwh2 << endl;
            cout << "Month 2 Total charges: $" << tlkwh2 << endl;
            cout << "Month 3 Electric Company charges: $" << rkwh3 << endl;
            cout << "Month 3 TDU charges: $" << tkwh3 << endl;
            cout << "Month 3 Total charges: $" << tlkwh3 << endl;
            cout << "Month 4 Electric Company charges: $" << rkwh4 << endl;
            cout << "Month 4 TDU charges: $" << tkwh4 << endl;
            cout << "Month 4 Total charges: $" << tlkwh4 << endl;
            cout << "Month 5 Electric Company charges: $" << rkwh5 << endl;
            cout << "Month 5 TDU charges: $" << tkwh5 << endl;
            cout << "Month 5 Total charges: $" << tlkwh5 << endl;
            cout << "Month 6 Electric Company charges: $" << rkwh6 << endl;
            cout << "Month 6 TDU charges: $" << tkwh6 << endl;
            cout << "Month 6 Total charges: $" << tlkwh6 << endl;
            cout << "Month 7 Electric Company charges: $" << rkwh7 << endl;
            cout << "Month 7 TDU charges: $" << tkwh7 << endl;
            cout << "Month 7 Total charges: $" << tlkwh7 << endl;
            cout << "Month 8 Electric Company charges: $" << rkwh8 << endl;
            cout << "Month 8 TDU charges: $" << tkwh8 << endl;
            cout << "Month 8 Total charges: $" << tlkwh8 << endl;
            cout << "Month 9 Electric Company charges: $" << rkwh9 << endl;
            cout << "Month 9 TDU charges: $" << tkwh9 << endl;
            cout << "Month 9 Total charges: $" << tlkwh9 << endl;
            cout << "Month 10 Electric Company charges: $" << rkwh10 << endl;
            cout << "Month 10 TDU charges: $" << tkwh10 << endl;
            cout << "Month 10 Total charges: $" << tlkwh10 << endl;
            cout << "Month 11 Electric Company charges: $" << rkwh11 << endl;
            cout << "Month 11 TDU charges: $" << tkwh11 << endl;
            cout << "Month 11 Total charges: $" << tlkwh11 << endl;
            cout << "Month 12 Electric Company charges: $" << rkwh12 << endl;
            cout << "Month 12 TDU charges: $" << tkwh12 << endl;
            cout << "Month 12 Total charges: $" << tlkwh12 << endl;
            cout << endl;
            cout << endl;
        }
        //outputs2 simple totals
        cout << "Customer: " << firstName << " " << lastName << endl;
        cout << "Total TDU Charges: $" << tduCharges << endl;
        cout << "Total Electric Company Charges: $" << companyCharges << endl;
        cout << "Total Charges: $" << totalCharges << endl;




    }
    return 0;
}
