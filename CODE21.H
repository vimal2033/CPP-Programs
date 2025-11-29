/*
Title: Student Grade Division Calculator using Class
Description: Program with StudentGrade class to calculate division (1st/2nd/3rd) based on marks percentage and Pass/Fail status.
*/

class StudentGrade {
private:
    int marks[5];     // Array to store subject marks
    int subjects;     // Number of subjects
    float totalMarks; // Total marks obtained

public:
    void inputMarks();    // Take marks input
    void calculateTotal(); // Calculate total
    void getDivision();    // Calculate and display division
};

// Function to input number of subjects and marks
void StudentGrade::inputMarks() {
    cout << "Enter number of subjects (max 5): ";
    cin >> subjects;

    if (subjects > 5)
        subjects = 5;   // Limit to max 5 subjects

    cout << "Enter marks for " << subjects << " subjects:\n";
    for (int i = 0; i < subjects; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
    }
}

// Function to calculate total marks
void StudentGrade::calculateTotal() {
    totalMarks = 0;
    for (int i = 0; i < subjects; i++) {
        totalMarks += marks[i];
    }
}

// Function to determine division based on percentage
void StudentGrade::getDivision() {
    calculateTotal();  // Calculate total first
    float percentage = (totalMarks / (subjects * 100.0)) * 100.0;

    clrscr();
    cout << "\nTotal Marks: " << totalMarks << "/" << (subjects * 100);
    cout << "\nPercentage: " << percentage << "%";

    // Check division based on standard criteria
    if (percentage >= 60) {
        cout << "\n\nResult: PASS - 1st Division";
    } else if (percentage >= 45) {
        cout << "\n\nResult: PASS - 2nd Division";
    } else if (percentage >= 33) {
        cout << "\n\nResult: PASS - 3rd Division";
    } else {
        cout << "\n\nResult: FAIL";
    }

    cout << endl;
}

void FindStudentGrade() {
    clrscr();
    StudentGrade student;
    student.inputMarks();
    student.getDivision();

    cout << "\n\nPress any key to exit...";
    getch();
}
