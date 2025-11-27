/*
    Title: Maclaurin Series for e^x, sin x, and cos x
    Description: Calculates e^x, sin x, and cos x using Maclaurin series expansion up to n terms.

    Series formulas used:

    e^x = 1 + x/1! + x^2/2! + x^3/3! + ... + Tn

    sin x = x - x^3/3! + x^5/5! - x^7/7! + ... + Tn

    cos x = 1 - x^2/2! + x^4/4! - x^6/6! + ... + Tn
*/


float factorial(int n) {
    float fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

float power(float base, int exp) {
    float result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

void MaclaurinSeries() {
    clrscr();

    float x, sinx = 0, cosx = 0, expx = 0;
    int n;

    cout << "Enter value of x (radians): ";
    cin >> x;

    cout << "Enter number of terms n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        expx += power(x, i) / factorial(i);
        sinx += power(-1, i) * power(x, 2 * i + 1) / factorial(2 * i + 1);
        cosx += power(-1, i) * power(x, 2 * i) / factorial(2 * i);
    }

    cout << "e^x series approximation: " << expx << "\n";
    cout << "sin x series approximation: " << sinx << "\n";
    cout << "cos x series approximation: " << cosx << "\n";

    getch();
}
