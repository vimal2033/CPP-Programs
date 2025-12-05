/*
TITLE: Copy Constructor
DESCRIPTION: Demonstrates custom copy constructor for StudentInfo class with dynamic marks array.
Shows deep copy (new memory allocation + value copying) instead of default shallow copy.
*/

class StudentInfo {
private:
    char name[50];
    int *marks;
    int numSubjects;

public:
    StudentInfo();                                      // default constructor
    StudentInfo(char n[50], int s, int m[]);            // parameterized constructor
    StudentInfo(StudentInfo &other);                    // copy constructor
    ~StudentInfo();                                     // destructor
    void display();                                     // display function
};

// Default constructor - initializes empty object
StudentInfo::StudentInfo() {
    strcpy(name, "");
    numSubjects = 0;
    marks = NULL;
    cout << "Default constructor called\n";
}

// Parameterized constructor - allocates and copies marks array
StudentInfo::StudentInfo(char n[50], int s, int m[]) {
    strcpy(name, n);
    numSubjects = s;
    marks = new int[numSubjects];          // allocate memory

    for (int i = 0; i < s; i++) {          // copy marks
        marks[i] = m[i];
    }

    cout << "Parameterized constructor: " << name << endl;
}

// COPY CONSTRUCTOR - performs deep copy
StudentInfo::StudentInfo(StudentInfo &other) {
    strcpy(name, other.name);
    numSubjects = other.numSubjects;
    marks = new int[numSubjects];          // allocate new memory

    for (int i = 0; i < numSubjects; i++) {
        marks[i] = other.marks[i];         // copy values
    }

    cout << "Copy constructor: " << name << endl;
}

// Destructor - releases dynamic memory
StudentInfo::~StudentInfo() {
    if (marks != NULL) {
        delete[] marks;
    }
    cout << "Destructor: " << name << endl;
}

// Display function - prints name and marks
void StudentInfo::display() {
    cout << "Name: " << name << ", Marks: ";
    for (int i = 0; i < numSubjects; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}

// Function to demonstrate copy constructor
void ConstructorCopy() {
    clrscr();

    int marks1[4] = {85, 92, 78, 95};
    StudentInfo s1("Alice", 4, marks1);

    cout << "\nOriginal object:\n";
    s1.display();

    StudentInfo s2 = s1;           // copy constructor
    cout << "\nCopy #1 (s2 = s1):\n";
    s2.display();

    StudentInfo s3 = s2;           // copy constructor again
    cout << "\nCopy #2 (s3 = s2):\n";
    s3.display();

    getch();
}

