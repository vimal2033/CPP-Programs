/*
Title: Sum of Digits
Description: Program to calculate the sum of digits of an integer.
*/


int sumOfDigits(int num) {
    int sum = 0;
    int digit;

    if (num < 0)
        num = -num;   // handle negative numbers

    while (num != 0) {
        digit = num % 10;   // last digit
        sum = sum + digit;  // add to sum
        num = num / 10;     // remove last digit
    }

    return sum;
}

void DigitSum() {
    clrscr();

    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "\nSum of digits = " << sumOfDigits(n);

    cout << "\n\nPress any key to exit...";
    getch();
}
