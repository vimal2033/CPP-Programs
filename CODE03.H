// Title: Calculate Area of a Circle
// Description: This program takes the radius of a circle as input,
//              calculates the area using the formula Area = π * r * r,
//              and displays the result.


void AreaCircle() {
    clrscr();  // Clear the screen 

    // Declare variables to store radius and area
    float radius, area;

    // Input the value of radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area 
    area = 3.14 * radius * radius;

    // Display the result
    cout << "Area of the circle is: " << area;

    getch();  
}
