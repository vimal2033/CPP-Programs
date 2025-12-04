/*
Title: SINGLE INHERITANCE

Description: This C++ program demonstrates single inheritance where
a derived class (Student) inherits data members and member functions
from a single base class (Person) using public inheritance.
*/


class Person {
protected:
    int name;
    int age;

public:
    // Constructor for base class
    Person(int n, int a) {
        name = n;
        age = a;
    }

    // Display person information
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;
    float percentage;

public:
    // Constructor for derived class (calls base constructor)
    Student(int n, int a, int r, float p) : Person(n, a) {
        rollNo = r;
        percentage = p;
    }

    // Display complete student information
    void displayStudent() {
        displayPerson();  // Access base class function
        cout << "Roll No: " << rollNo << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "------------------------" << endl;
    }
};

int SingleInheritance() {
    // Create object of derived class
    Student s1(101, 19, 105, 88.5);

    cout << "Student Information:" << endl;
    s1.displayStudent();

    return 0;
}
