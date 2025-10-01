/*
    Title     : Average of Five Subjects
    Description: This program asks the user to enter marks for five subjects,
                 calculates the average, and displays the result.
*/

#include <iostream.h>
#include <conio.h>

void main() {
    clrscr(); // Clear screen for Turbo C

    float s1, s2, s3, s4, s5, avg;

    cout << "Enter marks for Subject 1: ";
    cin >> s1;

    cout << "Enter marks for Subject 2: ";
    cin >> s2;

    cout << "Enter marks for Subject 3: ";
    cin >> s3;

    cout << "Enter marks for Subject 4: ";
    cin >> s4;

    cout << "Enter marks for Subject 5: ";
    cin >> s5;

    avg = (s1 + s2 + s3 + s4 + s5) / 5;

    cout << "Average marks = " << avg;

    getch(); // Wait for keyboard input before closing the output window
}
