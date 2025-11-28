/*
Title: Age Calculator using Class
Description: Turbo C++ OOP program with AgeCalculator class to compute exact age in years, months, days and age category from birth date.
*/


class AgeCalculator {
private:
    int birthDay, birthMonth, birthYear;  // Birth date components
    int currentDay, currentMonth, currentYear;  // Current date

public:
    // Function to input birth date
    void inputBirthDate() {
        cout << "=== AGE CALCULATOR ===" << endl;
        cout << "\nEnter your birth date:";
        cout << "\nDay (1-31): ";
        cin >> birthDay;
        cout << "Month (1-12): ";
        cin >> birthMonth;
        cout << "Year (1900-2025): ";
        cin >> birthYear;
        
        // Set current date (28-Nov-2025)
        currentDay = 28;
        currentMonth = 11;
        currentYear = 2025;
    }

    // Function to validate input date
    int isValidDate() {
        return (birthDay >= 1 && birthDay <= 31 && 
                birthMonth >= 1 && birthMonth <= 12 && 
                birthYear >= 1900 && birthYear <= 2025);
    }

    // Function to calculate age difference
    void calculateAge() {
        int years = currentYear - birthYear;
        int months = currentMonth - birthMonth;
        int days = currentDay - birthDay;
        
        // Adjust if birthday hasn't occurred this year
        if(days < 0) {
            months--;
            days += 30;  // Approximate month length
        }
        
        if(months < 0) {
            years--;
            months += 12;
        }
        
        // Display results
        clrscr();
        cout << "\nBirth Date: " << birthDay << "/" << birthMonth << "/" << birthYear;
        cout << "\nCurrent Date: " << currentDay << "/" << currentMonth << "/" << currentYear;
        cout << "\n\nYour Age: " << years << " years, " << months << " months, " << days << " days";
        
        // Determine age category
        if(years < 18) {
            cout << "\nStatus: Minor";
        } else if(years >= 18 && years < 60) {
            cout << "\nStatus: Adult";
        } else {
            cout << "\nStatus: Senior Citizen";
        }
        
        cout << endl;
    }

    // Main function to run age calculation
    void computeAge() {
        inputBirthDate();
        
        if(isValidDate()) {
            calculateAge();
        } else {
            clrscr();
            cout << "\nInvalid date entered!";
            cout << endl;
        }
    }
};

void AgeCalculate() {
    clrscr();
    
    AgeCalculator person;
    person.computeAge();
    
    cout << "\n\nPress any key to exit...";
    getch();
}
