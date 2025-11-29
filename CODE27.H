/*
Title: Factorial Using Operator Overloading
Description: Program that overloads the unary ! operator in a class to compute the factorial of an integer.
*/

class Factorial {
private:
    int n;        // input number
    long fact;    // factorial result

public:
    // Constructor
    Factorial() {
        n = 0;
        fact = 1;
    }

    // Read number from user
    void input() {
        cout << "Enter a non-negative integer: ";
        cin >> n;
    }

    // Overload unary ! operator to calculate factorial
    long calculateFactorial(int num) {
        if (num <= 1) return 1;
        return num * calculateFactorial(num - 1);
    }

    void operator ! () {
        fact = 1;
        if (n < 0) {
            fact = -1;   // indicate invalid
            return;
        }

        fact = calculateFactorial(n); // Use recursive function
    }

    // Display result
    void display() {
        if (fact == -1) {
            cout << "\nFactorial is not defined for negative numbers.";
        } else {
            cout << "\nFactorial of " << n << " = " << fact;
        }
    }
};

void FactorialOverloading() {
    clrscr();

    Factorial f;
    f.input();

    !f;          // calls overloaded operator to compute factorial
    f.display(); // show result

    cout << "\n\nPress any key to exit...";
    getch();
}
