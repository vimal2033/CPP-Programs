/*
    Title: Temperature Converter
    Description: Converts temperature between Celsius and Fahrenheit.
*/

#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();  // Clear the screen

    float temp, convertedTemp;
    char choice;

    // Asking user for the type of conversion
    cout << "Convert temperature:\n";
    cout << "C to F: Enter C\n";
    cout << "F to C: Enter F\n";
    cout << "Enter your choice (C/F): ";
    cin >> choice;

    // Taking temperature input based on choice
    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        // Celsius to Fahrenheit conversion formula
        convertedTemp = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemp << endl;
    }
    else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        // Fahrenheit to Celsius conversion formula
        convertedTemp = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << convertedTemp << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    getch();  // Wait for user input before closing
}
