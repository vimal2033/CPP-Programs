/*
Title: Add Complex Numbers using Friend Function
Description: Program to add two complex numbers with a friend function that can access private real and imaginary parts.
*/

class Complex {
private:
    float real;
    float imag;

public:
    // Function to input a complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display a complex number
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }

    // Friend function declaration to add two Complex numbers
    friend Complex addComplex(Complex c1, Complex c2);
};

// Friend function definition
Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

void FriendComplexAdd() {
    clrscr();

    Complex c1, c2, sum;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    // Call friend function
    sum = addComplex(c1, c2);

    cout << "\nFirst number      : ";
    c1.display();
    cout << "\nSecond number     : ";
    c2.display();
    cout << "\nSum of two numbers: ";
    sum.display();

    cout << "\n\nPress any key to exit...";
    getch();
}
