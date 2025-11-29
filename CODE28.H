/*
Title: Check Armstrong Number
Description: Program to check whether a given integer is an Armstrong number (sum of cubes of its digits equals the number).
*/


int isArmstrong(int num) {
    int temp = num;
    int sum = 0;
    int digit;

    // Calculate sum of cubes of digits
    while (temp != 0) {
        digit = temp % 10;                 // get last digit
        sum = sum + (digit * digit * digit); // add cube of digit
        temp = temp / 10;                  // remove last digit
    }

    // Compare sum with original number
    if (sum == num)
        return 1;   // Armstrong
    else
        return 0;   // Not Armstrong
}

void Armstrong() {
    clrscr();

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isArmstrong(n))
        cout << "\n" << n << " is an Armstrong number.";
    else
        cout << "\n" << n << " is not an Armstrong number.";

    cout << "\n\nPress any key to exit...";
    getch();
}
