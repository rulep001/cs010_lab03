//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab3.cpp
/// @brief Lab 3
///
/// @author Ryan Ulep [rulep001@ucr.edu]
/// @date April 13, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>

using namespace std;

int main()
{
    double purchasePrice = 0.0;
    double amountPaid   = 0.0;
    double changeAmount = 0;

    int numPennies   = 0;
    int numNickels   = 0;
    int numDimes     = 0;
    int numQuarters  = 0;
    int numDollars   = 0;

    // Ask for purchase price and amount tendered
    cout << "Enter purchase amount: ";
    cin >> purchasePrice;
    cout << endl;

    cout << "Enter amount received: ";
    cin >> amountPaid;
    cout << endl;

    // Calculate change value
    changeAmount = amountPaid - purchasePrice;
    numPennies = static_cast<int>(changeAmount * 100 + 0.5);

    // Use integer division to calculate the number of each denomination
    numDollars = numPennies / 100;
    numPennies = numPennies % 100;

    numQuarters = numPennies / 25;
    numPennies = numPennies % 25;

    numDimes = numPennies / 10;
    numPennies = numPennies % 10;

    numNickels = numPennies / 5;
    numPennies = numPennies % 5;

    // Output all values to screen
    cout << "Total Change: $" << changeAmount << endl;
    cout << endl;
    cout << "dollars " << numDollars << endl;
    cout << "quarters " << numQuarters << endl;
    cout << "dimes " << numDimes << endl;
    cout << "nickels " << numNickels << endl;
    cout << "pennies " << numPennies << endl;

    return 0;
}
