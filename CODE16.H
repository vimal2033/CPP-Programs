/*
Title: Even Odd Checker
Description: Program to input a number and determine if it is even or odd using modulo operator.
Designed for Turbo C++ with screen clear and pause features.
*/

void EvenOdd() {
    clrscr();  // Clear screen before output
    
    int num;
    cout << "Enter a number: ";
    cin >> num;  // Input number from user
    
    // Check if number is even or odd
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }
    
    getch();  // Pause output screen until key press
}
