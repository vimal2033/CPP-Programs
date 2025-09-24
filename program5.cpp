/*
    Title: Volume of Triangular Prism
    Description: Calculates volume using base, height of triangle, and prism length.
*/

#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();  // Clear the screen

    double base, triHeight, length, volume;

    // Taking input from user
    cout << "Enter the base of the triangular face: ";
    cin >> base;

    cout << "Enter the height of the triangular face: ";
    cin >> triHeight;

    cout << "Enter the length of the prism: ";
    cin >> length;

    // Calculating the volume of the triangular prism
    // Volume = (1/2 * base * height) * length
    volume = 0.5 * base * triHeight * length;

    // Displaying the calculated volume
    cout << "The volume of the triangular prism is: " << volume << endl;

    getch();  // Wait for user input before closing
}
