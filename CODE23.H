/*
Title: Find Minimum and Maximum using Class
Description: Program using NumberOps class to find minimum and maximum among three numbers.
*/


class NumberOps {
private:
    int num1, num2, num3;  // Store three numbers
    int minimum, maximum;  // Store results

public:
    // Function to input three numbers
    void inputNumbers() {
        cout << "Enter three numbers:\n";
        cout << "Number 1: ";
        cin >> num1;
        cout << "Number 2: ";
        cin >> num2;
        cout << "Number 3: ";
        cin >> num3;
    }

    // Function to find minimum and maximum
    void findMinMax() {
        minimum = num1;
        if (num2 < minimum) minimum = num2;
        if (num3 < minimum) minimum = num3;

        maximum = num1;
        if (num2 > maximum) maximum = num2;
        if (num3 > maximum) maximum = num3;
    }

    // Function to display minimum and maximum
    void displayResults() {
        cout << "\nMinimum number: " << minimum;
        cout << "\nMaximum number: " << maximum;
    }
};

void MinMax() {
    clrscr();

    NumberOps op;
    op.inputNumbers();
    op.findMinMax();
    op.displayResults();

    cout << "\n\nPress any key to exit...";
    getch();
}
