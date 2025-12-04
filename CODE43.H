/*
Title: MULTIPLE INHERITANCE

Description: C++ program demonstrating multiple inheritance where
a derived class (StudentMI) inherits from two base classes (PersonMI and Marks).
*/

class PersonMI
{
protected:
    char name[20];
    int age;

public:
    PersonMI(char *n,int a)
    {
        strcpy(name,n);
        age=a;
    }

    void displayPerson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Marks
{
protected:
    float mathMarks;
    float scienceMarks;

public:
    Marks(float m,float s)
    {
        mathMarks=m;
        scienceMarks=s;
    }

    void displayMarks()
    {
        cout<<"Math Marks: "<<mathMarks<<endl;
        cout<<"Science Marks: "<<scienceMarks<<endl;
    }
};

class StudentMI : public PersonMI, public Marks
{
public:
    StudentMI(char *n,int a,float m,float s):PersonMI(n,a),Marks(m,s)
    {
    }

    void displayStudent()
    {
        displayPerson();
        displayMarks();
        cout<<"------------------------"<<endl;
    }
};

void MultipleInharitance()
{
    clrscr();

    StudentMI s1("Priya",19,85.5,92.0);

    cout<<"Student Information:"<<endl;
    s1.displayStudent();

    getch();
}
