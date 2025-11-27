/*
Title: Prime Number Series Generator
Description: Program to print all prime numbers from 2 up to user-specified N using nested loops.
*/


void PrimeSeries() {
    clrscr();  // Clear screen before output
    
    int n, i, j, flag;
    cout << "Enter upper limit N: ";
    cin >> n;  // Input upper limit from user
    
    cout << "Prime numbers up to " << n << " are:" << endl;
    
    // Check each number from 2 to n
    for (i = 2; i <= n; i++) {
        flag = 1;  // Assume number is prime
        
        // Check divisibility from 2 to i-1
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;  // Number is not prime
                break;
            }
        }
        
        if (flag == 1) {
            cout << i << " ";  // Print prime number
        }
    }
    
    getch();  // Pause output screen until key press
}
