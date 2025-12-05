/*
TITLE: Operator Overloading using Friend Function
DESCRIPTION: Demonstrates + operator overloading using friend function for ComplexNum class.
Friend function adds two complex numbers: (a+bi) + (c+di) = (a+c) + (b+d)i.
*/

#include<iostream.h>
#include<conio.h>

class ComplexNum {              // renamed from Complex to avoid conflict
private:
    int real, imag;

public:
    ComplexNum(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Friend function declaration - can access private members
    friend ComplexNum operator+(ComplexNum c1, ComplexNum c2);

    void display() {
        cout << real;
        if (imag > 0)
            cout << " + i" << imag;
        else if (imag < 0)
            cout << " - i" << (-imag);
        cout << endl;
    }
};

// Friend function definition - NOT member of class
ComplexNum operator+(ComplexNum c1, ComplexNum c2) {
    ComplexNum temp;
    temp.real = c1.real + c2.real;   // access private members directly
    temp.imag = c1.imag + c2.imag;
    return temp;
}

void FriendOperatorOverload() {
    clrscr();

    ComplexNum c1(5, 3), c2(2, -7);

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();

    ComplexNum c3 = c1 + c2;        // friend function called
    cout << "c1 + c2 = ";
    c3.display();

    getch();
}

