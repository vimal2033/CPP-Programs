/*
Title: Check Neon Number
Description: Program to check whether a given number is a Neon number (sum of digits of its square equals the original number).
*/

void CheckNeonNumber() {
    clrscr();

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sq = num * num;   // square of the number
    int sum = 0;

    // sum digits of the square
    while (sq > 0) {
        sum = sum + (sq % 10);
        sq = sq / 10;
    }

    if (sum == num)
        cout << "\n" << num << " is a Neon number.";
    else
        cout << "\n" << num << " is NOT a Neon number.";

    cout << "\n\nPress any key to exit...";
    getch();
}
