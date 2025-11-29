/*
Title: Palindrome Checker using Class
Description: Program defining a Palindrome class to check if a string or number is palindrome.
*/

class Palindrome {
private:
    char str[100];  // Store input string

public:
    void input();          // Accept input string
    int  isPalindrome();   // Check palindrome
    void displayResult();  // Show result
};

// Function to accept input string
void Palindrome::input() {
    cout << "Enter number or word: ";
    cin >> str;
}

// Function to check if the stored string is palindrome
int Palindrome::isPalindrome() {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not palindrome
        }
        start++;
        end--;
    }
    return 1;  // Is palindrome
}

// Function to display palindrome check result
void Palindrome::displayResult() {
    if (isPalindrome()) {
        cout << "\n" << str << " is a palindrome." << endl;
    } else {
        cout << "\n" << str << " is not a palindrome." << endl;
    }
}

void FindPalindrome() {
    clrscr();

    Palindrome p;
    p.input();
    p.displayResult();

    cout << "\nPress any key to exit...";
    getch();
}
