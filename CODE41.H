/*
Title: UNARY OPERATOR OVERLOADING

Description: This C++ program demonstrates overloading of a unary
operator (++). It increments the value of a data member using
a user-defined operator function.
*/

class Number {
private:
    int value;

public:
    // Constructor to initialize value
    Number(int v = 0) {
        value = v;
    }

    // Overload unary ++ operator (prefix)
    void operator++() {
        ++value;   // increment the data member
    }

    // Function to input value
    void input() {
        cout << "Enter a number: ";
        cin >> value;
    }

    // Function to display value
    void display() {
        cout << "Value = " << value << endl;
    }
};

void UnaryOverload() {
    Number n;
    clrscr();
    n.input();      // take input
    cout << "Before increment: ";
    n.display();

    ++n;            // calls overloaded unary ++ operator

    cout << "After increment: ";
    n.display();

    getch();
}
