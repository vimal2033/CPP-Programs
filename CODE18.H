/*
Title: Voter Eligibility Checker
Description: Program to check if a person is eligible to vote based on age (18+ years).
*/


void VoterEligible() {
    clrscr();  // Clear screen before output
    
    int age;
    cout << "Enter your age: ";
    cin >> age;  // Input age from user
    
    // Check voter eligibility
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
    
    getch();  // Pause output screen until key press
}
