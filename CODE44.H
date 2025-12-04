/*
Title: MULTILEVEL INHERITANCE

Description: C++ program demonstrating multilevel inheritance where
Student class inherits from Marks class, which inherits from Person class.
*/


class PersonML
{
protected:
    char name[20];
    int age;

public:
    PersonML(char *n,int a)
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

class MarksML : public PersonML
{
protected:
    float mathMarks;
    float scienceMarks;

public:
    MarksML(char *n,int a,float m,float s):PersonML(n,a)
    {
        mathMarks=m;
        scienceMarks=s;
    }

    void displayMarks()
    {
        displayPerson();
        cout<<"Math Marks: "<<mathMarks<<endl;
        cout<<"Science Marks: "<<scienceMarks<<endl;
    }
};

class StudentML : public MarksML
{
public:
    StudentML(char *n,int a,float m,float s):MarksML(n,a,m,s)
    {
    }

    void displayStudent()
    {
        displayMarks();
        cout<<"*** Student Record ***"<<endl;
        cout<<"------------------------"<<endl;
    }
};

void MultillevelInharitance()
{
    clrscr();

    StudentML s1("Priya",19,85.5,92.0);

    cout<<"Complete Student Information:"<<endl;
    s1.displayStudent();

    getch();
}
