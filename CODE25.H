/*
Title: Function Overloading Demo
Description: Program showing function overloading with multiple versions of sum() for int and float, and different number of arguments.
*/


// sum of two integers
int sum(int a, int b) {
    return a + b;
}

// sum of three integers (same name, different parameters)
int sum(int a, int b, int c) {
    return a + b + c;
}

// sum of two floats (same name, different types)
float sum(float x, float y) {
    return x + y;
}

void FriendOverloading() {
    clrscr();

    int a = 10, b = 20, c = 5;
    float p = 2.5, q = 3.75;

    cout << "Sum of two ints (10,20): " << sum(a, b) << endl;
    cout << "Sum of three ints (10,20,5): " << sum(a, b, c) << endl;
    cout << "Sum of two floats (2.5,3.75): " << sum(p, q) << endl;

    cout << "\nPress any key to exit...";
    getch();
}
