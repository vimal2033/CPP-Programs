// Title: Calculate Area of a Rectangle
// Description: This program takes the length and breadth of a rectangle as input,
//              calculates the area using the formula,
//              and displays the result.


void AreaRectangle() {
    clrscr();  // Clear the screen 

    // Declare variables for length, breadth, and area
    int length, breadth, area;

    // User input
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    // Calculate the area 
    area = length * breadth;

    // Display the calculated area
    cout << "The area of the rectangle is: " << area;

    getch(); 
}
