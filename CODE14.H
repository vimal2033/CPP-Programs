/*
Title: Leap Year Checker
Description: Simple program to check if entered year is leap year using Gregorian rules.
*/

void LeapYear() {
    clrscr();  // Clear the screen for clean output
    
    int year;
    cout << "Enter a year: ";  // Prompt user for year input
    cin >> year;               // Read year from keyboard
    
    // Apply leap year logic
    // Rule: Divisible by 4 AND (not by 100 OR divisible by 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;  // Display leap year result
    } else {
        cout << year << " is not a leap year." << endl;  // Display non-leap result
    }
    
    getch();  // Wait for key press before closing
}
