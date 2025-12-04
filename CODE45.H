/*
Title: HIERARCHICAL INHERITANCE

Description: C++ program demonstrating hierarchical inheritance where
multiple derived classes (Student and Teacher) inherit from a single base class (Person).
*/


class PersonHI
{
protected:
    char name[20];
    int age;

public:
    PersonHI(char *n,int a)
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

class StudentHI : public PersonHI
{
private:
    int rollNo;

public:
    StudentHI(char *n,int a,int r):PersonHI(n,a)
    {
        rollNo=r;
    }

    void displayStudent()
    {
        displayPerson();
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"--- Student ---"<<endl;
    }
};

class TeacherHI : public PersonHI
{
private:
    char subject[20];

public:
    TeacherHI(char *n,int a,char *s):PersonHI(n,a)
    {
        strcpy(subject,s);
    }

    void displayTeacher()
    {
        displayPerson();
        cout<<"Subject: "<<subject<<endl;
        cout<<"--- Teacher ---"<<endl;
    }
};

void HirarchicalInharitance()
{
    clrscr();

    StudentHI s1("Priya",19,105);
    TeacherHI t1("Ramesh",35,"Math");

    cout<<"Student Information:"<<endl;
    s1.displayStudent();

    cout<<"\nTeacher Information:"<<endl;
    t1.displayTeacher();

    getch();
}
