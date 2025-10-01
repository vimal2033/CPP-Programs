/*
    Title: Roots of Quadratic Equation
    Description: This program calculates and displays the roots of 
                 the quadratic equation Ax^2 + Bx + C = 0 given 
                 by the user. It handles real and complex roots.
*/

#include <iostream.h>
#include <conio.h>
#include <math.h>

void main() {
    clrscr(); // Clear the screen (Turbo C++ specific)

    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    cout << "Enter coefficients A, B, and C: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real and distinct roots: " << root1 << " , " << root2 << endl;
    } else if (discriminant == 0) {
        // Two real and equal roots
        root1 = -b / (2 * a);
        cout << "Two real and equal roots: " << root1 << endl;
    } else {
        // Complex conjugate roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Two complex roots: " << realPart << "+" << imagPart << "i"
             << " , " << realPart << "-" << imagPart << "i" << endl;
    }

    getch(); // Wait for user key press before exit (Turbo C++ specific)
}
