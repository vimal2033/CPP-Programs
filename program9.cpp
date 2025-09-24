/*
    Title: Simple Interest Calculator
    Description: Calculates simple interest given principal, rate, and time.
*/

#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();  // Clear the screen

    double principal, rate, time, simpleInterest;

    // Taking input from the user
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in %): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculating simple interest
    // Simple Interest = (Principal * Rate * Time) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the calculated simple interest
    cout << "Simple Interest = " << simpleInterest << endl;

    getch();  // Wait for user input before closing
}
