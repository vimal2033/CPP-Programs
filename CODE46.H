/*
Title: HYBRID INHERITANCE

Description: C++ program demonstrating hybrid inheritance combining
multiple inheritance and hierarchical inheritance.
*/

class PersonHY
{
protected:
    char name[20];
    int age;

public:
    PersonHY(char *n,int a)
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

class StudentHY : public PersonHY
{
protected:
    int rollNo;

public:
    StudentHY(char *n,int a,int r):PersonHY(n,a)
    {
        rollNo=r;
    }

    void displayStudent()
    {
        displayPerson();
        cout<<"Roll No: "<<rollNo<<endl;
    }
};

class SportsHY : public PersonHY
{
protected:
    char game[20];

public:
    SportsHY(char *n,int a,char *g):PersonHY(n,a)
    {
        strcpy(game,g);
    }

    void displaySports()
    {
        displayPerson();
        cout<<"Game: "<<game<<endl;
    }
};

class PlayerHY : public StudentHY, public SportsHY
{
public:
    PlayerHY(char *n,int a,int r,char *g):StudentHY(n,a,r),SportsHY(n,a,g)
    {
    }

    void displayPlayer()
    {
        StudentHY::displayStudent();
        SportsHY::displaySports();
        cout<<"--- Player Information ---"<<endl;
    }
};

void HybridInharitance()
{
    clrscr();

    PlayerHY p1("Ravi",20,101,"Cricket");

    cout<<"Player Complete Information:"<<endl;
    p1.displayPlayer();

    getch();
}
