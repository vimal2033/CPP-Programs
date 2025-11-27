/*
Title: Greatest Among Three Numbers
Description: Program to input three numbers and display the greatest of them using if-else conditions.
Designed for Turbo C++ with screen clear and pause features.
*/


void GreatestThree() {
    clrscr();  // Clear screen before output
    
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;  // Input three numbers
    
    // Determine greatest number
    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the greatest number." << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " is the greatest number." << endl;
    } else {
        cout << num3 << " is the greatest number." << endl;
    }
    
    getch();  // Pause the output screen until a key is pressed
}
