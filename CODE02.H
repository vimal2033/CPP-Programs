// Title: Calculate Area of a Triangle
// Description: This program takes the base and height of a triangle as input,
//              calculates the area using the formula (1/2) * base * height,
//              and displays the result.


void AreaTriangle() {
    clrscr();  // Clear the screen 

    // Declare variables to store base, height and area
    float base, height, area;

    // Input values
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate the area of the triangle
    area = 0.5 * base * height;

    // Display the calculated area
    cout << "The area of the triangle is: " << area;

    getch();  
}
