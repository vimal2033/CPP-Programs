// Title: Calculate Cube of (a + b) Using Whole Cube Formula
// Description: This program takes two integers a and b as input,
//              and calculates the cube of their sum (a + b)^3 
//              using the algebraic expansion formula:
//              (a + b)^3 = a^3 + 3a^2b + 3ab^2 + b^3


void WholeCube() {
    

    // Declare variables to store input values and the result
    int a, b;
    long result;

    clrscr();  // Clear the screen 
    
    //Input two innumberstegers
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    // Calculate (a + b)^3 using the whole cube formula
    result = (long)(a * a * a) + 3L * (a * a) * b  + 3L * a * (b * b) + (long)(b * b * b);                    

    // Display the result
    cout << "(a + b)^3 = " << result;

    getch();  
}
